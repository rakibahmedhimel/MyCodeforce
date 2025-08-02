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
    int mn = a[0];
    int mx = a[0];
    int count = 0;
    for(int i = 1; i<n; i++)
    {
        if(a[i]>mx)
        {
            mx = a[i];
            count++;
        }
        else if(a[i]<mn)
        {
            mn = a[i];
            count++;
        }
        /*  10
            4664 6496 5814 7010 5762 5736 6944 4850 3698 7242 */
    }
    cout<<count<<endl;
    return 0;
}