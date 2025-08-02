#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    cin>>n;
    set<int>s;
    for(int i = 0; i<n; i++)
    {
        cin>>a;
        for(int j = 0; j<a; j++)
        {
            cin>>b;
            s.insert(b);
        }
        cin>>c;
        for(int k = 0; k<c; k++)
        {
            cin>>b;
            s.insert(b);
        }
    }
    int l = s.size();
    if(l==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}