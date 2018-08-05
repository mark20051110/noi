#include<bits/stdc++.h>
using namespace std;
int a[50005];
bool vis[50005];
int main ()
{
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	int i,n,m,x,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	  scanf("%d",&a[i]);
	for(i=1;i<=m;i++)
	{
		memset(vis,0,sizeof(vis));
		int t=0;
		cin>>x;
		for(j=1;j<=n;j++)
		{
			if(x>=a[j])
		      vis[j]=true;
		    else
		      t=1;
		}
		for(j=2;j<n;j++)
		  if(vis[j]==true&&vis[j-1]==false)
			t++;
		printf("%d\n",t);
	}
	return 0;
}
