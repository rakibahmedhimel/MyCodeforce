#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin>>k>>n>>w;
    int cost=0;
    int i = 1;
    while(w--)
    {
        cost = cost + (k * i);
        i++;
    }
    
    if(n>=cost)
    cout<<"0"<<endl;
    else
    cout<<cost-n<<endl;

    return 0;
}