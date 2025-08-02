#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m = n * 2;
    int a[m];
    int mx = 0;
    int ans = 0;
    for(int i = 0; i<m; i++)
    {
        cin>>a[i];
    }
    
    for(int i = 0; i<m; i+=2)
    {
        ans = ans + a[i+1] - a[i];
        mx = max(mx,ans);
    }

    cout<<mx<<endl;

    return 0;
}

/***

4
0 3 = 0 + 3 - 0 = 3 ; i = 0 ; mx = 3
2 5 = 3 + 5 - 2 = 6 ; i = 2 ; mx = 6
4 2 = 6 + 2 - 4 = 4 ; i = 4 ; mx = 6
4 0 = 4 + 0 - 4 = 0 ; i = 6 ; mx = 6


***/