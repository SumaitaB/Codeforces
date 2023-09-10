
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a==0||a==1||a==2)
    {
        cout<<"NO\n";
    }
    else if(a%2==0&&a>0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}

