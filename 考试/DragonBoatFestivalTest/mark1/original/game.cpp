#include<bits/stdc++.h>
using namespace std;
int a[1000100],b[1000100];
int main()
{
	freopen("game.in","r",stdin);
	freopen("game.out","w",stdout);
	int s,m=100000000,temp;
	cin>>s;
	for(int i=1;i<=sqrt(s);i++)
	{
	        if(s%i==0)
	                temp=(i+s/i)*2;
            if(temp<m)m=temp;
	}
	cout<<m<<endl;
	return 0;
}
