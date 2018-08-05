#include <bits/stdc++.h>
using namespace std;
int a[50010],t[50010];
int main()
{
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	int n,q;
	cin>>n>>q;
	for(int i = 1;i <= n;i++)
		cin>>a[i];
	while(q>0)
	{
		q--;
		int k,sum=1,aa=n;
		cin>>k;
		for(int i = 1;i <= n;i++)
			if(a[i]<=k)
			{
				t[i]=1;
				aa--;
			}
		/*cout<<endl;
		for(int i = 1;i <= n;i++)
			cout<<t[i]<<" ";
		cout<<endl;     DEBUG   */
		if(aa==0)
		{
			cout<<0<<endl;
			aa=n;
			memset(t,0,sizeof(t));
			continue;
		}
		for(int i = 1;i <= n;i++)
		{
			if(t[i]==0 && t[i+1]==0 && i+1<=n)
				aa--;
		}
		memset(t,0,sizeof(t));
		cout<<aa<<endl;
	}
	return 0;
}
