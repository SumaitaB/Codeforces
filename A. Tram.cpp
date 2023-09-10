#include<stdio.h>
#include<string.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int a[1005],b[1005],n,i,j,m=-9999;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld%lld",&a[i],&b[i]);
    }
    for(i=1; i+1<=n; i++)
    {
         if(b[i]>m)
        {
            m=b[i];
        }
        b[i+1]=b[i]-a[i+1]+b[i+1];
        if(b[i+1]>m)
        {
            m=b[i+1];
        }
    }
    printf("%lld\n",m);
    return 0;
}

