#include <bits/stdc++.h>
using namespace std;
int xx,yy,Min=500000001,n,m,w,i,j,k,tx,ty,x[1001][101],y[1001][101];
bool g[1001][101];
void dfs(int xx,int yy,int v)
{
	if(xx==x[xx][yy]&&yy==y[xx][yy]&&xx==tx&&yy==ty)
		Min=min(Min,v);
	else
	{
		v=v+w*(max(x[xx][yy]-xx,xx-x[xx][yy]));
		if(g[xx][yy]==1)
			return ;
		else
			g[xx][yy]=1;
		dfs(x[xx][yy],y[xx][yy],v);
	}
}

int main()
{
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	cin>>n>>m>>w>>tx>>ty;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			int xx,yy;
			cin>>xx>>yy;
			x[i][j]=xx;
			y[i][j]=yy;
		}
	}
	dfs(1,1,0);
	if(Min==500000001) cout<<"impossible";
	else cout<<Min;
	return 0;
}
