#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count = 0;
    for(int i = 0; i<s.length(); i++)
    {
        //00100110111111101 = 6
        //1000000001 
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if(count==6)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}