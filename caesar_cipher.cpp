#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char p[100001];
    long k1;
    cout<<"\n Enter plaintext: ";
    scanf("%s",p);
    cout<<"\n Enter key: ";
    cin>>k1;
    for(long i=0;i<strlen(p);i++)
    {
        if(p[i]!=' ')
        p[i]+=k1;
        if(p[i]>122)
            p[i]-=26;
    }
    cout<<"\n The ciphertext is: "<<p;

    char c[100001];
    long k2;
    cout<<"\n Enter ciphertext: ";
    scanf("%s",c);
    cout<<"\n Enter key: ";
    cin>>k2;
    for(long i=0;i<strlen(c);i++)
    {
        if(c[i]!=' ')
        c[i]-=k2;
        if(c[i]<97)
            c[i]+=26;
    }
    cout<<"\n The plaintext is: "<<c;
    return 0;
}
