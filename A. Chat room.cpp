#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    string t = "hello";
    int count = 0;
    for(int i = 0 ; i<s.size(); i++)
    {
        if(s[i]==t[count])
        {
            count++;
        }
    }

    if(count == t.size())
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

    return 0;
}