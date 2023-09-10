
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,i,a[100000+9],m,c=0;

    cin>>n>>m;

    for(i=0; i<m; i++)
    {
        cin>>a[i];
    }

    c=a[0]-1;

    for(i=1; i<m; i++)
    {
        if(a[i]>=a[i-1])
        {
            c+=(a[i]-a[i-1]);
        }
        else if(a[i]<a[i-1])
        {
            c+=(n-(a[i-1]-a[i]));
        }
    }
    cout<<c<<endl;
    return 0;
}
