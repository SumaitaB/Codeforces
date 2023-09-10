#include<bits/stdc++.h>
using namespace std;

int main()
{
    string t,s="";
    int n,i;
    cin>>n;
    cin>>t;

    for(int i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            s.clear();
            s=t.substr(0,i);
            reverse(s.begin(),s.end());
            t.replace(t.begin(),t.begin()+i,s);
        }
    }
    cout<<t<<endl;
    return 0;
}
