#include<iostream>
#include<stdio.h>
#define MAX 100001
using namespace std;
int main()
{
    char c[MAX],p[10][MAX],s[11]="etaoinshrd";
    long i,f[26],large=0,j;
    int k,pos;
    cout<<"\n Enter ciphertext: ";
    gets(c);
    for(i=0;i<26;i++)
        f[i]=0;
    for(i=0;c[i]!='\0';i++)
        f[(int)c[i]-97]++;
    for(i=0;i<26;i++)
        if(large<f[i])
        {
            pos=i;
            large=f[i];
        }
    for(i=0;i<10;i++)
    {
        k=pos+97-s[i];
        if(k<0)
            k=26+k;

        for(j=0;c[j]!='\0';j++)
        {
            if(c[j]==' ')
                p[i][j]=' ';
            else
            {
                p[i][j]=c[j]-k;
                if(p[i][j]<97)
                    p[i][j]+=26;
            }

        }
        p[i][j]='\0';
        cout<<"\n Option "<<i+1<<" is: "<<p[i];
    }
    return 0;
}
