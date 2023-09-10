
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,i,a[100000+9],s=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<n; i++)
    {
        if(a[i]!=a[i-1])
            s++;
    }
    cout<<s+1<<endl;

    return 0;
}
