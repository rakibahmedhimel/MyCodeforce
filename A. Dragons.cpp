#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, n;
    cin>>a>>n;
    int count = 0;

    pair <int,int> p[n];

    for(int i = 0; i<n; i++)
    {
        cin>>p[i].first>>p[i].second;
    }

    sort(p, p+n);

    for(int i = 0; i<n; i++)
    {
        if(a>p[i].first)
        {
            a += p[i].second;
        }
        else{
            count++;
            break;
        }
    }

    if(count>0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}