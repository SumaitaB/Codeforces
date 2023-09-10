
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string a,s="";
    ll i;
    cin>>a;
    for(i=0; i<a.length(); i++)
    {
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y')
        {

        }
        else if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
        {

        }
        else
        {
            if(a[i]>=65&&a[i]<=90)
            {
                a[i]=a[i]+32;
            }
            s.push_back('.');
            s.push_back(a[i]);

        }
    }

    cout<<s<<endl;
    return 0;
}
