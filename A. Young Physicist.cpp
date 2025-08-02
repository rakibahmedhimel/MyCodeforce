#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[100][100];
    int x = 0, y = 0, z = 0;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cin>>a[i][j];
        }
        x = x + a[i][0];
        y = y + a[i][1];
        z = z + a[i][2];
    }
    if(x==0 && y==0 && z==0)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
}

//TLE PART:

/**#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x = 0;
    int y = 0;
    int z = 0;
    int a[2];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cin>>a[j];
            if(j==0)
            {
                x = x + a[j];
            }
            else if(j==1)
            {
                y = y + a[j];
            }
            else
            {
                z = z + a[j];
            }
        }
    }
    
    if(x==0 && y==0 && z==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}**/