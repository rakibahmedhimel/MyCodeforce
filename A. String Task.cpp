#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    for(int i=0; i<n; i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
        {
            continue;
        }
        else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {
            continue;
        }
        else
        {
            s[i]=towlower(s[i]);
            cout<<"."<<s[i];
        }
    }
    cout<<endl;
    return 0;

}