#include <bits/stdc++.h>
using namespace std;
long long a[10000][10000],horsex[10]={0,1,2,2,1,-1,-2,-2,-1},horsey[10]={0,-2,-1,1,2,2,1,-1,-2};
bool use[1000][1000];
int main()
{
	int n,m; 
	memset(use,false,sizeof(use));
	cin>>n>>m;
	int x,y;
	cin>>x>>y; 
	n++;m++;x++;y++;
	for(int j = 0;j <= 8;j++)
	{
		int xx=x+horsex[j],yy=y+horsey[j];
		if(xx>=1 && xx<=n && yy>=1 && yy<=m)
			use[xx][yy]=true;
	}
	a[0][1]=1;
	for(int i = 1;i <= n ;i++)
	{
		for(int j = 1;j <= m;j++)
			if(use[i][j]==false)
 				a[i][j]+=a[i][j-1]+a[i-1][j];
	}
	cout<<a[n][m];
	return 0;
}
