#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    double a;
    cin>>n>>m>>a;

    long long x = ceil(n/a);
    long y = ceil(m/a);
    cout<<x*y<<endl;
    return 0;
}