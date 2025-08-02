#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin>>n>>k;

    if(k <= (n+1)/2) 
    cout<<(k * 2) - 1<<endl;
    else
    cout<<(k - (n+1)/2)*2<<endl;

    return 0;
}




/**
 * Run Time Error
 * #include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin>>n>>k;
    long long a[n];
    long long d;
    if(n%2==0) 
    {
        d = n/2;
    }
    else 
    {
        d = (n/2) + 1;
    }
    long long b = 1;
    for(long long i = 0; i<d; i++)
    {
        a[i] = b;
        b = b + 2;
    }

    b = 2;
    for(long long i = d; i<n; i++)
    {
        a[i] = b;
        b = b + 2;
    }
    
    for(int i = 0; i<n; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
   
    cout<<a[k-1]<<endl;
    return 0;
}**/