#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, count=0;
    int c = 2;
    int a[24];
    for( i =0; i<5; i++)
    {
        for( j=0; j<5; j++)
        {
            cin>>a[j];
            if(a[j]>0)
            {
               count = abs(c-i) + abs(c-j);
            }
        }
    }
    cout<<count<<endl;
    return 0;
}