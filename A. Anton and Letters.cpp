#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s); //it take input with spaces

    set<char>n;

    for(int i = 0; i<s.size(); i++)
    {
        if(isalpha(s[i]))
        {
            n.insert(s[i]);
        }
    }

    cout<<n.size()<<endl;
    return 0;
}