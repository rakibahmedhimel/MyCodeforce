#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double h;
    cin>>n>>h;
    int a[n];
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<=h)
        {
            count++;
        }
        else
        {
            count =count + ceil(a[i]/h); 
        }
        //cout<<i<<" iterantion: "<<"a[i]:"<<a[i]<<"count = "<<count<<endl;
        
    }
    // 3 7
    // 4 5 14
    //cout<<"final count: ";
    cout<<count<<endl;
    
    return 0;
}