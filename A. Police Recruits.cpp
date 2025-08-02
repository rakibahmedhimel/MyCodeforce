#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p = 0, c = 0, count = 0;
    int t, a;
    cin>>t;

    for(int i = 0; i<t; i++)
    {
        cin>>a;
        if(a<0)
        {
            c = a;
        }
        else{
            p += a;
        }
        if(c<0 && p==0)
        {
            count++;
            c++;
        }
        else if(c<0 && p>0)
        {
            c++;
            p--;
        }
    }
    cout<<count<<endl;
    return 0;
}