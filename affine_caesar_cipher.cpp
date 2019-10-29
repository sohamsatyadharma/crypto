#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char p[100001];
    int a,b;
    cout<<"\n Enter plaintext: ";
    scanf("%s",p);
    cout<<"\n Enter the values of a and b: ";
    cin>>a>>b;
    for(long i=0;p[i]!='\0';i++)
    {
        if(p[i]!=' ')
        {
            p[i]=a*p[i]+b;
            if(p[i]<97)
                p[i]+=26;
            else if(p[i]>122)
                p[i]-=26;
        }
    }
    cout<<"\n The ciphertext is: "<<p;
    return 0;
}
