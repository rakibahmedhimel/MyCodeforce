
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    int a, b, c, d;
    while(true)
    {
        y++;
        //1987
        a = y / 1000;
        b = (y / 100) % 10;
        c = (y / 10) % 10;
        d =  y % 10;
        
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            break;
        }
    }
    cout<<y<<endl;
    return 0;
}


/**#include<bits/stdc++.h>
using namespace std;

int inc(int n)
{
    return n++;
}

string distinct(int a)
{
    inc(a);
    int count = 0;
    string s = to_string(a);
    for(int i = 0; i<s.size()-1; i++)
    {
        if(s[i]!=s[i+1])
        {
            count++;
        }
    }
    if(count==s.size()-1)
    {
        return s;
    }
    else
    {
        distinct(inc(a));
    }
    
}
int main()
{
    int y;
    cin>>y;
    cout<<distinct(y);
    return 0;

}**/