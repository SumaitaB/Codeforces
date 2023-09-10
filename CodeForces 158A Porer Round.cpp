
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k,i,a[100000+9],c=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
       for(i=0;i<n;i++)
    {

        if((a[i]>=a[k-1])&&a[i]>0)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
