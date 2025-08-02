#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin>>a>>b;

    for(int i =0; i<a.size(); i++)
    {
        a[i] = towlower(a[i]);
        b[i] = towlower(b[i]);
    }
        if(a==b)
        {
            cout<<"0"<<endl;
        }
        else
        {
            for(int j=0; j<a.size(); j++)
            {
            if(a[j]>b[j])
            {
                cout<<"1"<<endl;
                break;
            }
            if(b[j]>a[j])
            {
                cout<<"-1"<<endl;
                break;
            }
            
            }
            
        }
    

    return 0;
}