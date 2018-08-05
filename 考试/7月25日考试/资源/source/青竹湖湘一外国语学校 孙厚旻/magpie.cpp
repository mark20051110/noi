#include<bits/stdc++.h>
using namespace std;
int mapp[1010][1010];
int nx[20]={0,-2,-1,1,2,-2,-1,1,2};
int ny[20]={0,1,2,2,1,-1,-2,-2,-1};
int zx[20]={0,2,-2,2,-2};
int zy[20]={0,2,-2,-2,2};
struct place
{
	int x;int y;int s;
}o,k;
queue <place> q;
queue <place> p;
int main()
{
	int i,j,x=0,y=0,n,m;
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	cin>>n>>m;
	o.x=1;o.y=1;o.s=0;q.push(o);
	k.x=n;k.y=m;k.s=0;p.push(k);
	while (q.empty()==0||p.empty()==0)
	{
		k=p.front();
		if (k.s%2==0)
		{
		for (i=1;i<=4;i++)
		{
			o=q.front();
			o.x+=zx[i];o.y+=zy[i];o.s+=2;if (mapp[o.x][o.y]==2)x=o.s;
			if (o.x>=1&&o.x<=n&&o.y>=1&&o.y<=m&&mapp[o.x][o.y]==0)
			{
                q.push(o);mapp[o.x][o.y]=1;
			}
		}
		q.pop();
		}
		for (i=1;i<=8;i++)
		{
			k=p.front();
			k.x+=nx[i];k.y+=ny[i];k.s++;if (mapp[k.x][k.y]==1)y=k.s;
			if (k.x>=1&&k.x<=n&&k.y>=1&&k.y<=m&&mapp[k.x][k.y]==0)
			{
				p.push(k);mapp[k.x][k.y]=2;
			}
		}
		p.pop();
		if (y!=0&&x!=0)cout<<min(x,y)<<'s';
		else if(y!=0)cout<<y<<'s'<<'n';
		else if(x!=0)cout<<x<<'s'<<'z';
		if (y!=0||x!=0)return 0;
	}
	return 0;
}
