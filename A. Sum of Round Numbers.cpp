#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    int a[100000];
    
    while(t--)
    {
        int d = 0, r = 0;
        cin>>n;
        if(n>=1000)
        {
            r = n % 1000;
            a[d++] = n - r;
            n = n % 1000;
        }
        if(n>=100)
        {
            r = n % 100;
            a[d++] = n - r;
            n = n % 100;
        }
        if(n>=10)
        {
            r = n % 10;
            a[d++] = n - r;
            n = n % 10;
        }
        if(n<10 && n>0)
        {
            a[d++] = n;
        }

        vector<int>v;
        for(int i = 0; i<d; i++)
        {
            v.push_back(a[i]);
        }
        cout<<v.size()<<endl;
        for(int i = 0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}