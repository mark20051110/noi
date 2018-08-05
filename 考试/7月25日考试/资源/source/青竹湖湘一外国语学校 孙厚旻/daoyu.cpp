#include<bits/stdc++.h>
#define maxn 50005
using namespace std;
int a[maxn];
int b[maxn];
int main()
{
	int i,j,x,y,n,m,k;
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	cin>>n>>m;
	for (i=1;i<=n;i++)cin>>a[i];
	for (i=1;i<=m;i++)
	{
		y=0;
		cin>>x;
		for (j=1;j<=n;j++)
			b[j]=a[j]-x;
		for (j=1;j<=n;j++)
		{
			if (b[j]>0&&b[j+1]<=0)y++;
		}
		cout<<y<<endl;
	}
	return 0;
}
