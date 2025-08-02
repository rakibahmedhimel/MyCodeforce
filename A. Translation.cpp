#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin>>s>>t;
    int i;
    int j = t.size()-1;
    //cout<<j<<endl;
    int count =0;
    for(i = 0; i<s.size(); i++)
    {
        if(s[i]==t[j])
        {
            count++;
        }
        j--;
    }
    if(count==s.size())
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

    return 0;
}