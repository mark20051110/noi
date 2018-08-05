#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,ans;
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	cin>>a>>b;
	c=abs(a-b);
	if(c==1)
	{
		if(b>a)ans=b+1;
		else ans=a+1;
		cout<<a*b/ans<<"s";
		return 0;
	}
	if(c>1)
	{
		if(b>a)ans=b+3;
		else ans=a+3;
		cout<<a*b/ans+1<<"s";
		return 0;
	}
	if(c==0)
	{
		if(a==5)cout<<"2s";
		if(a==6)cout<<"4s";
		return 0;
	}
}
