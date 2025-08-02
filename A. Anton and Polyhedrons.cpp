#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int sum = 0;
    int j = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>s;
        if(s[j]=='T') 
        {
            sum += 4;
            continue;
        }
        else if(s[j]=='C') 
        {
            sum += 6;
            continue;
        }
        else if(s[j]=='O') 
        {
            sum += 8;
            continue;
        }
        else if(s[j]=='D') 
        {
            sum += 12;
            continue;
        }
        else if(s[j]=='I') 
        {
            sum += 20;
            continue;
        }
    }
    cout<<sum<<endl;
    return 0;
}