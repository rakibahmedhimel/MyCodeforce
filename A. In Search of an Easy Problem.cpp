#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>m;
        sum = sum + m;
    }

    if(sum == 0)
    {
        cout<<"Easy"<<endl;
    }
    else
    cout<<"hard"<<endl;

    return 0;

}