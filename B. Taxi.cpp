#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int c1=0, c2=0, c3=0, c4=0;
    int taxi = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1) c1++;
        else if(a[i]==2) c2++;
        else if(a[i]==3) c3++;
        else if(a[i]==4) c4++;
    }
    /*cout<<"c1: "<<c1<<endl;
    cout<<"c2: "<<c2<<endl;
    cout<<"c3: "<<c3<<endl;
    cout<<"c4: "<<c4<<endl;*/
    taxi += c4;
    //cout<<"after c4: "<<taxi<<endl;
    while(c1!=0 && c3!=0)
    {
        c1--;
        c3--;
        taxi++;
    }
    if(c1==0 && c3!=0) 
    {
        taxi += c3;
        c3 = 0;
    }
    //cout<<"after c3: "<<taxi<<endl;
    taxi += c2 / 2;
    /*cout<<"hudae: "<<c2 / 2<<endl;
    cout<<"hudae: "<<c2 % 2<<endl;*/
    if(c2%2!=0)
    {
        if(c1>2)
        {
            taxi++;
            c1 = c1 - 2;
            c2 = 0;
        }
        else
        {
            taxi++;
            c2 = 0;
            c1 = 0;
        }
    }
    //cout<<"after c2: "<<taxi<<endl;
    //cout<<c1<<endl;
    if(c1!=0)
    {
        taxi += c1 / 4;
        //cout<<taxi<<endl;
        /*cout<<"hudae: "<<c1 / 4<<endl;
        cout<<"hudae: "<<c1 % 4<<endl;*/
        if(c1 % 4 != 0)
        {
            taxi++;
        }
    }

    cout<<taxi<<endl;
    
    return 0;
}