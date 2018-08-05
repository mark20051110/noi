#include<bits/stdc++.h>
using namespace std;
int a[50100],b[50100],c[50100];
int main()
{
	int n,m,i,j,t,sum=0;
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)cin>>a[i];
	for(i=1;i<=m;i++)cin>>b[i];
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		 if(a[j]<=b[i])c[j]=1;
		j=1;sum=0;
		while(j<=n)
		{
			t=0;
			while(c[j]!=1&&j<=n)
			{
				t=1;j++;
			}if(t==1)sum++;
			j++;
		}printf("%d\n",sum);
		for(j=1;j<=n;j++)c[j]=0;
	}
	return 0;
}
