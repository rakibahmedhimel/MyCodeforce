#include<bits/stdc++.h>
using namespace std;
int time(int n)
{
    int t = 0;
    for(int i = 1; i<=n; i++)
    {
        t += i * 5;
    }
    return t;
}
int main()
{
    int n, k;
    cin>>n>>k;
    
    if((time(n) + k) <= 240)
    {
        cout<<n<<endl;
        return 0;
    }
    else
    {
        while(n--)
        {
            if((time(n) + k) <= 240)
            {
                cout<<n<<endl;
                return 0;
            }
        }
    }
}