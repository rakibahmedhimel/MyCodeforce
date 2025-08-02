#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c, d;
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>c>>d;
        if((d-c)>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}