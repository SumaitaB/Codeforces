#include<bits/stdc++.h>

using namespace std;
int main ()
{
    long long int k,n,x,le,p;
    cin>>n>>k;
    le=240-k;
    p=n;
    while(1)
    {

        x=p*(p+1)/2;
        x=x*5;
        if(le>=x)
        {
            break;
        }
        p--;


    }
    cout<<p<<endl;

    return 0;
}


