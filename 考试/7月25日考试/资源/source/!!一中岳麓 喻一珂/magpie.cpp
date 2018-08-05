#include <bits/stdc++.h>
using namespace std;
int n,m,head,tail,ans;
int niu[2][8]={1,1,-1,-1,2,2,-2,-2,
				2,-2,2,-2,1,-1,1,-1};//牛郎下一步咋走 
int zhi[2][4]={2,2,-2,-2,
				2,-2,2,-2};//织女下一步咋走 
struct queue
{
	int x;//横坐标 
	int y;//纵坐标 
}que[1000001];//广搜专用队列 
struct mapp
{
	bool niu;//牛郎是否到过 
	int niustep;//走多少步到的 
	bool zhi;//同上 
	int zhistep;
}a[1001][1001];
int read()//快读 
{
	int s=0,w=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')	w=-1;c=getchar();}
	while(c>='0'&&c<='9')	s=s*10+c-'0',c=getchar();
	return s*w;
}
void zhi_bfs()
{
	int tx,ty,nx,ny;
	while(head<tail)//当队列不为空时(tail指向队尾的后一位) 
	{
		nx=que[head].x;ny=que[head].y;//准备扩展 
		for(int i=0;i<4;i++)//织女只有4个方向 
		{
			tx=zhi[0][i]+nx;
			ty=zhi[1][i]+ny;
			if(tx<1||tx>n||ty<1||ty>m||a[tx][ty].zhi)//如果越界或已经走过 
				continue;
			a[tx][ty].zhistep=a[nx][ny].zhistep+1;
			a[tx][ty].zhi=true;//已经走过，标记 
			que[tail].x=tx;que[tail].y=ty;//加入队尾，以后拓展 
			++tail;//继续拓展 
		}
		++head;//往后拓展 
	}
	return ;
}
void niu_bfs()//同zhi_bfs 
{
	int tx,ty,nx,ny;
	while(head<tail)
	{
		nx=que[head].x;ny=que[head].y;
		for(int i=0;i<8;i++)//牛郎有8个方向 
		{
			tx=niu[0][i]+nx;
			ty=niu[1][i]+ny;
			if(tx<1||tx>n||ty<1||ty>m||a[tx][ty].niu)
				continue;
			a[tx][ty].niustep=a[nx][ny].niustep+1;
			a[tx][ty].niu=true;
			que[tail].x=tx;que[tail].y=ty;
			++tail;
		}
		++head;
	}
	return ;
}
void zn()
{
	a[1][1].zhi=true;//先把自己标记 
	head=1;tail=2;//初始化队列 
	que[head].x=1;que[head].y=1;//自己入队 
	zhi_bfs();//爆搜 
	return ;
}
void nl()//同上 
{
	a[n][m].niu=true;
	head=1;tail=2;
	que[head].x=n;que[head].y=m;
	niu_bfs();
	return ;
}
void find_ans()
{
	ans=1e9;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(a[i][j].niu&&a[i][j].zhi)//如果两个人能到 
				ans=min(max(a[i][j].niustep,a[i][j].zhistep*2/*织女两秒一步*/),ans);
	return ;
}
void output()
{
	if(ans==1e9)//这个别管…… 
		cout<<"impossible"<<endl;
	else
		cout<<ans<<'s'<<endl;
	return ;
}
void print()//这个查错用的 
{
	cout<<"Niu:"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			cout<<a[i][j].niustep<<" ";
		cout<<endl;
	}
	cout<<"Zhi:"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			cout<<a[i][j].zhistep<<" ";
		cout<<endl;
	}
	return ;
}
int main()
{
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	n=read();m=read();
	memset(a,0,sizeof(a));
	zn();nl();
	find_ans();
//	print();
	output();
	return 0;
}
