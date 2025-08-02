#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    int count = 0;
    if(a==b)
    {
        cout<<"1"<<endl;
        return 0;
    }

    while(true)
    {
        a = a * 3;
        b = b * 2;
        count++;
        if(a>b)
        {
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}