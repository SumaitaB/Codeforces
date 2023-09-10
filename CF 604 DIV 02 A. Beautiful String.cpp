#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,a,b,c,n,t,f;
    cin>>t;
    string s,v;
    for(i=1; i<=t; i++)
    {
        cin>>v;
        f = 0;
        v.insert(v.begin(),'5');
        v.insert(v.end(),'6');
        for(j=1; j<v.size(); j++)
        {
            if(v[j]=='?')
            {
                if((v[j-1]!='a') && (v[j+1]!='a'))
                {
                    v[j] = 'a';

                }
                else  if((v[j-1]!='b') && (v[j+1]!='b'))
                {
                    v[j] = 'b';

                }
                else if((v[j-1]!='c') && (v[j+1]!='c'))
                {
                    v[j] = 'c';

                }
            }
            else if(v[j]=='a' || v[j]=='b' || v[j] == 'c')
            {
                if(v[j]=='a')
                {
                    if(v[j-1]=='a' || v[j+1]=='a')
                    {
                        f = 1;
                        break;
                    }
                }
                else if(v[j]=='b')
                {
                    if(v[j-1]=='b' || v[j+1]=='b')
                    {
                        f = 1;
                        break;
                    }
                }
                else if(v[j]=='c')
                {
                    if(v[j-1]=='c' || v[j+1]=='c')
                    {
                        f = 1;
                        break;
                    }
                }
            }
        }
        if(f==1)
        {
            cout<<"-1"<<endl;
        }
        else if(f==0)
        {
            v.erase(v.begin());
            v.erase(v.end()-1);
            cout<<v<<endl;
        }
        v.clear();
    }
    return 0;
}
