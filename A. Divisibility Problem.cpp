#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a, b;
    for(int i = 0; i<n; i++)
    {
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<"0"<<endl;
        }
        int ans = 0;
        if(a<b)
        {
            ans = b - a;
            cout<<ans<<endl;
        }
        else
        {
            ans = (((a/b)+1)*b) - a;
            cout<<ans<<endl;
        }
    }
    return 0;
}