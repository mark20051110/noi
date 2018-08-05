#pragma G++ optimize(3)//≥Ù—ı”≈ªØ 
#pragma GCC optimize(3)
#include <bits/stdc++.h>
using namespace std;
int n,m;
inline void read(int &o)//øÏ∂¡ 
{
	char p;
	int data=0;
	p=getchar();
	while(p>='0'&&p<='9') {data=data*10+p-'0';p=getchar();}
	o=data;
	return;
}
struct ll{
	int x;
	int y;
	int s;
	void get(int a,int b,int c)
	{
		x=a;y=b;s=c;
		return;
	}
	void give(int &a,int &b,int &c)
	{
		a=x;
		b=y;
		c=s;
		return;
	}
};
int jx[8]={1,1,-1,-1,2,2,-2,-2};
int jy[8]={1,-1,2,-2,1,-1,2,-2};
bool nn[1001][1001];
bool move(int x,int y,int z)
{
	register int xx,yy,zz,i,j;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			nn[i][j]=1;
	queue <ll> k;
	k.get(0,0,0);
	while(k.size())
	{
		k.give(xx,yy,zz);
		k.pop();
		for(i=0;i<8;i++)
			if(xx+jx[i]>=0&&xx+jx[i]<=n&&yy+jy[i]>=0&&yy+jy[i]<=m&&zz+1<=z&&nn[i][j])
			{
				if(yy+jy[i]==y&&xx+jx[i]==x) {cout<<zz+1;return 1;}
				k.get(xx+jx[i],yy+jy[i],zz+1);
				nn[i][j]=0;
			}
	}
	return 0;
}
bool zn[1001][1001];
int kx[4]={2,2,-2,-2};
int ky[4]={2,-2,2,-2};
void bfs()
{
	register int xx,yy,zz;
	queue <ll> k;
	k.get(n,m,0);
	while(k.size())
	{
		k.give(xx,yy,zz);
		if(move(xx,yy,zz)) return;
		for(i=1;i<=n;i++)
		{
			if(xx+kx[i]>=0&&xx+kx[i]<=n&&yy+ky[i]>=0&&yy+ky[i]<=m&&zz+1<=z&&zn[i][j])
			{
				if(yy+jy[i]==0&&xx+kx[i]==0) {cout<<zz*2;return;}
				k.get(xx+kx[i],yy+ky[i],zz*2);
				zn[i][j]=0;
			}
		}
	}
	return;
}
int main()
{
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	read(n);
	read(m);
	bfs();
	return 0;
}
