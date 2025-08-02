#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int a = 0;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(s == "++X")
        ++a;
        else if(s =="X++")
        a++;
        else if(s== "--X")
        --a;
        else
        a--;
    }
    cout<<a<<endl;
} // BlackLight
