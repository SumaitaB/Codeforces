
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
 ll k,n,w,s=0,ans,i;

 cin>>k>>n>>w;

 for(i=1;i<=w;i++)
 {
     s+=(k*i);
     //cout<<s<<endl;
 }
 //cout<<s;
 ans=s-n;
 if(ans<0)
 {
     ans=0;
 }
    cout<<ans<<endl;
    return 0;
}



