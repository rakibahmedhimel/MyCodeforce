#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int d;
    for(int i = 1; i<=n; i++)
    {
        cin>>d;
        a[d] = i;
    }
    for(int i = 1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<endl;
    
    return 0;
}