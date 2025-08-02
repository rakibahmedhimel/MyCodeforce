#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int upp = 0, loww = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            upp++;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            loww++;
        }
    }
    for(int i = 0; i<s.length(); i++)
    {
        if(upp>loww)
        {
            s[i] = towupper(s[i]);
        }
    else if(loww>=upp)
        {
            s[i] = towlower(s[i]);
        }
    }

    cout<<s<<endl;
    return 0;
    
} 
