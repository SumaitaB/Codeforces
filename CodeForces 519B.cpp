
#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    long long int n,a[100006],b[100006],i,j,k,p,q,x=0,y=0,s=0;
    scanf("%lld",&n);
    p=n-1;
    q=n-2;
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0; i<p; i++)
    {
        scanf("%lld",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+p);
    for(i=0; i<n-1; i++)
    {

        if(a[i]!=b[i])
        {
            x=1;
            s=a[i];break;

        }

    }
    if(x==1)
    {
        printf("%lld\n",s);
    }
    else
    {
        printf("%lld\n",a[p]);
    }

    for(i=0; i<q; i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+q);

    for(i=0; i<n-2; i++)
    {

        if(b[i]!=a[i])
        {
            y=1;
            s=b[i];break;

        }

    }
    if(y==1)
    {
        printf("%lld\n",s);
    }
    else
    {
        printf("%lld\n",b[q]);
    }
    return 0;
}


