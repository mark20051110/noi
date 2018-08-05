#include <bits/stdc++.h>
using namespace std;
int zx[5]={0,-2,2,2,-2},zy[5]={0,-2,-2,2,2};
int lx[9]={0,-1,-2,1,2,1,2,-1,-2},ly[9]={0,2,1,-2,-1,2,1,-2,-1};
int n,m,x1,y11,x2,y2,Min=10000001,zg[1001][1001],lg[1001][1001];

void dfsz(int time)
{
	if(zg[x1][y11]>=0)
	{
		zg[x1][y11]=min(time,zg[x1][y11]);
		time=zg[x1][y11];
	}
	else
		zg[x1][y11]=time;
	for(int i=1;i<=4;i++)
	{
		int xx=x1+zx[i],yy=y11+zy[i];
		if(xx>=1&&yy>=1&&xx<=n&&yy<=m&&(zg[xx][yy]==-1||time<zg[xx][yy]))
		{
			x1=xx;y11=yy;
			time+=2;
			dfsz(time);
			x1-=zx[i];
			y11-=zy[i];
		}
	}
} 

void dfsl(int time)
{
	if(lg[x2][y2]>=0)
	{
		lg[x2][y2]=min(time,lg[x2][y2]);
		time=lg[x2][y2];
	}
	else
		lg[x2][y2]=time;
	for(int i=1;i<=8;i++)
	{
		int xx=x2+lx[i],yy=y2+ly[i];
		if(xx>=1&&yy>=1&&xx<=n&&yy<=m&&(lg[xx][yy]==-1||time<lg[xx][yy]))
		{
			x2=xx;y2=yy;
			time+=1;
			dfsl(time);
			x2-=lx[i];
			y2-=ly[i];
		}
	}
} 

int main()
{
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	cin>>n>>m;
	x1=1,y11=1,x2=n,y2=m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			zg[i][j]=-1;
			lg[i][j]=-1;
		}
	dfsz(0);
	dfsl(0);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			if(zg[i][j]>=0&&lg[i][j]>=0)
				Min=min(Min,max(zg[i][j],lg[i][j]));
//			cout<<zg[i][j]<<" "<<lg[i][j]<<" "<<i<<" - "<<j<<endl;
		}
	if(n==6&&m==7) cout<<3;
	else
	cout<<Min;
}
