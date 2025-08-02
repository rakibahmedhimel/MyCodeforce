#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int count = 0;
    while(true)
    {
        if(x%5==0)
        {
            cout<<x/5<<endl;
            return 0;
        }

        else
        {
            cout<<(x/5)+1<<endl;
            return 0;
        }
    }
}

