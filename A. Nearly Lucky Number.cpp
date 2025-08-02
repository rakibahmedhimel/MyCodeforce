#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count = 0;
    int count2 = 0;
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            //4444 4444 4444 4444 44
            count++;
        }
    }
    /*cout<<s.length()<<endl;
    cout<<count<<endl;*/
    if(count==1)
    {
        if(s[0]='7')
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i = 0; i<count; i++ )
    {
        if(count==4 || count==7)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        string flag = to_string(count);
        if(flag[i]==4 || flag[i]==7)
        {
            count2++;
        }
        if(count2==flag.length())
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}