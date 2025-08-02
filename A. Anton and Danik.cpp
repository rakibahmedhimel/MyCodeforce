#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int count = 0; 
    int counter = 0; 
    for(int i = 0; i<n; i++)
    {
        if(s[i]=='A')
        {
            count++;
        }
        else
        counter++;
    }
    if(count==counter)
    {
        cout<<"Friendship"<<endl;
    }
    else if(count>counter)
    {
        cout<<"Anton"<<endl;
    }
    else
    cout<<"Danik"<<endl;

    return 0;
}