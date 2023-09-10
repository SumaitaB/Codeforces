
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,i,a[100000+9],c1=0,c2=0,c3=0,c4=0,t=0;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];

        if(a[i]==1)
        c1++;
        else if(a[i]==2)
        c2++;
        else if(a[i]==3)
        c3++;
        else if(a[i]==4)
        c4++;
    }

    t=c4;
    c4=0;

    t+=c2/2;
    c2=c2%2;
//4
//2+2
//1+3
//1+1+1+1
//1+1+2

    if(c1<c3)
    {
        t+=c1;
        c3=c3-c1;
        c1=0;
        t=t+c2+c3;
    }
    else if(c1>=c3)
    {
        t+=c3;
        c1=c1-c3;
        c3=0;

        t+=(c1/4);
        c1=c1%4;

        if(c1+c2*2<=4&&c1+c2*2>0)
        {
            t++;
            c1=0;
            c2=0;
        }
        else if(c1==3&&c2==1)
        {
            t+=2;
            c1=0;
            c2=0;
        }

    }

    cout<<t<<endl;
    return 0;
}
