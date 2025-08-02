#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count = 0;
	int l = s.size();
	for(int i = 0; i<l; i++)
	{
		if(s[i]>=65 && s[i]<=90) count++;
	}
	//cout<<s.size()<<endl<<count<<endl;
	if(count == l)
	{
		for(int i = 0; i<l; i++)
		{
			s[i] = towlower(s[i]);
		}
	}
	else if(s[0]>=97 && s[0]<=122)
	{
		if(count == l-1)
		{
			for(int i = 0; i<s.size(); i++)
			{
				if(i==0) {
					s[i] = towupper(s[i]);
				} else {
					s[i] = towlower(s[i]);
				}
			}
		}
	}
	cout<<s<<endl;
}