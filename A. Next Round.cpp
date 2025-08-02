#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    //8 5
    //10 9 8 7 7 7 5 5
    bool ok = false;
    int score = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>0)
        ok = true;
    }
    if(ok == false)
    {
        cout<<"0"<<endl;
        return 0;
    }
    for(int i =0; i<n; i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
        score++;
    }
    
    cout<<score<<endl;

    return 0;
}