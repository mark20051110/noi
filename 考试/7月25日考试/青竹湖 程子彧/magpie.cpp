#include <bits/stdc++.h>
using namespace std;
int niux[5]={-1,-2,1,2},niuy[5]={-2,-1,2,1};
int zhix[5]={-2,2,2,-2},zhiy[5]={2,2,-2,-2};
bool niu[1010][1010],zhi[1010][1010];
int niustep[1010][1010],zhistep[1010][1010];
int n,m;
void bfs_niu(int x,int y)
{
	int head=0,tail=1,q[1010][5];
	q[tail][1]=x,q[tail][2]=y;
	niustep[x][y]=0;
	while(head!=tail)
	{
		head++;
		for(int i = 0;i < 4;i++)
		{
			int xx=q[head][1]+niux[i],yy=q[head][2]+niuy[i];
			if(xx>=1 && xx<=n && yy>=1 && yy<=m && niu[xx][yy]==false)
			{
				q[++tail][1]=xx;
				q[tail][2]=yy;
				niu[xx][yy]=true;
				niustep[xx][yy]=niustep[q[head][1]][q[head][2]]+1;
			//	if(xx==1 && yy==1)return;
			}
		}
	}
}
void bfs_zhi(int x,int y)
{
	int head=0,tail=1,q[1010][5];
	q[tail][1]=x,q[tail][2]=y;
	while(head!=tail)
	{
		head++;
		for(int i = 0;i < 4;i++)
		{
			int xx=q[head][1]+zhix[i],yy=q[head][2]+zhiy[i];
			if(xx>=1 && xx<=n && yy>=1 && yy<=m && zhi[xx][yy]==false)
			{
				q[++tail][1]=xx;
				q[tail][2]=yy;
				zhi[xx][yy]=true;
				zhistep[xx][yy]=zhistep[q[head][1]][q[head][2]]+1;
			//	if(xx==n && yy==m)return;
			}
		}
	}
}
int main()
{
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	memset(niu,false,sizeof(niu));
	memset(zhi,false,sizeof(zhi));
	cin>>n>>m;
	bfs_niu(n,m);
	bfs_zhi(1,1);
	for(int i = 1;i <= n;i++)
		for(int j = 1;j <= m;j++)	
			if(niu[i][j]==true && zhi[i][j]==true)
			{
				int t=niustep[i][j]>zhistep[i][j]?niustep[i][j]:zhistep[i][j];
				cout<<t<<"s";
				return 0;
			}
	return 0;
}
