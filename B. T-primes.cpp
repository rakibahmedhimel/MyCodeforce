#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a;
    while(n--)
    {
        cin>>a;
        int count = 0;
        for(long long int i = 1; i<=a; i++)
        {
            if(a%i==0)
            {
                count++;
            }
        }
        if(count==3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}