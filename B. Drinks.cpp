#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i, a, sum = 0;
    for(i = 0; i<n; i++)
    {
        cin>>a;
        sum = sum + a;
    }
    //cout<<sum<<" "<<i<<endl;
    cout<<fixed;
    cout<<setprecision(12);
    double result = sum / double(i);
    cout<<result<<endl;
    return 0;
}