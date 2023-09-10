#include<bits/stdc++.h>
using namespace std;
string f(string s)
{
    if(s.length()%2==1)
    {
        return s;
    }
    string s1=f(s.substr(0,s.length()/2));
    string s2=f(s.substr(s.length()/2,s.length()/2));
    if(s1>s2)
    {
        return s2+s1;
    }
    else
    {
        return s1+s2;
    }
}
int main()
{
    string a,b;
    cin>>a>>b;
    int n=a.length();
    if(f(a)==f(b))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
