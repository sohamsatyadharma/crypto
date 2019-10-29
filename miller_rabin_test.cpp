#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
int modulo(int a,int b,int c)
{
    lld x=1,y=a;
    while(b>0)
    {
        if(b%2)
            x=(x*y)%c;
        y=(y*y)%c;
        b/=2;
    }
    return x%c;
}
lld mulmod(lld a,lld b,lld c)
{
    lld x=0,y=a%c;
    while(b>0)
    {
        if(b%2)
        x=(x+y)%c;
        y=(y*2)%c;
        b/=2;
    }
    return x%c;
}
bool Miller(lld p,lld iteration)
{
    if(p<2)
        return false;
    if(p!=2 && !(p%2))
        return false;
    lld s=p-1;
    while(!(s%2))
        s/=2;
    for(int i=0;i<iteration;i++)
    {
        lld a=rand()%(p-1)+1,temp=s;
        lld mod=modulo(a,temp,p);
        while(temp!=p-1 && mod!=1 && mod!=p-1)
        {
            mod=mulmod(mod,mod,p);
            temp<<=2;
        }
        if(mod!=p-1 && !(temp%2))
            return false;
    }
    return true;
}
int main()
{
    lld n,i,t;
    bool flag;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the number: ";
        cin>>n;
        cout<<"Enter the number of iterations: ";
        cin>>i;
        flag=Miller(n,i);
        flag?cout<<n<<" is probably prime":cout<<n<<" is not prime";
        cout<<endl;
    }
    return 0;
}
