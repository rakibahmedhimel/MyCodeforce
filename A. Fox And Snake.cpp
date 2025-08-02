#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;

    for(int i = 1; i<=a; i++)
    {
        int d = i/2;
        if(i%2!=0){
            for(int j = 1; j<=b; j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else if(i%2==0 && d%2==1){
            for(int k = 1; k<=b; k++)
            {
                if(k==b) cout<<"#";
                else cout<<".";
            }
            cout<<endl;
        }
        else if(i%2==0 && d%2==0)
        {
            for(int l = 1; l<=b; l++)
            {
                if(l==1) cout<<"#";
                else cout<<".";
            }
            cout<<endl;
        }
    }

    return 0;
}