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
    int mxi = 0;
    int mni = 0;

    int mxv = 0, mnv = 101;

    for(int i = 0; i<n; i++)
    {
        if(a[i]>mxv)
        {
            mxi = i;
            mxv = a[i];
        }
        if(a[i]<=mnv)
        {
            mni = i;
            mnv = a[i];
        }
    }
    if(mxi<mni)
    {
        cout<<(mxi-1) + (n-mni)<<endl;
    }
    else
    {
        cout<<((mxi-1) + (n-mni))-1<<endl;
    }

    return 0;
}