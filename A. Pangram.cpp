#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string p;
    for(int i = 0; i<n; i++)
    {
        p[i] = towlower(s[i]);
    }
    set<char>m;
    if(n<26)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        for(int i = 0; i<n; i++)
        {
            m.insert(p[i]);
        }
    }
    int len = m.size();
    //cout<<"Len:"<<len<<endl;
    if(len>=26)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}