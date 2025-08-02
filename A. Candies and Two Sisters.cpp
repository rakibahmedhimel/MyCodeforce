#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a;

    for(int i = 0; i<n; i++)
    {
        cin>>a;
        if(a==1 || a==2) cout<<"0"<<endl;
        else if(a%2==0) cout<<(a/2)-1<<endl;
        else cout<<a/2<<endl;
    }
    return 0;
}