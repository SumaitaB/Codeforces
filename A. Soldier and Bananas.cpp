#include<stdio.h>
#include<string.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int k,n,w,i,j,x=0,d;

    scanf("%lld%lld%lld",&k,&n,&w);
   for(i=1;i<=w;i++)
   {
       x=x+(i*k);
   }
   if((x-n)>=0){
        d=x-n;
    printf("%lld\n",d);}
    else
    {
         printf("0\n");
    }
    return 0;
}

