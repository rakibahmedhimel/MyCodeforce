#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    int sum = 0, mx = 0;
    for(int i = 0; i<n-1; i++)
    {
        if(a[i]<=a[i+1])
        {
            sum++;
            mx = max(mx, sum);
        }
        else sum = 0;
    }

    cout<<mx+1<<endl;
    return 0;
    
}