#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int bill = 0;

    int a[5] = {100,20,10,5,1};

    for(int i = 0; i<5; i++)
    {
        bill += n / a[i];
        n = n % a[i];
    }

    cout<<bill<<endl;
    return 0;
}