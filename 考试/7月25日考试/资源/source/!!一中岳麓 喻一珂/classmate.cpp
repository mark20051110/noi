#include <bits/stdc++.h>
using namespace std;
struct build
{
	int gx;//将要去的楼层 
	int gy;//将要去的房间 
	int sum;//走了几次 
	int num;//防止重复 
}a[1000+10][100+10];
int ans,x,y,v;
int read()//快读 
{
	int s=0,w=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')	w=-1;c=getchar();}
	while(c>='0'&&c<='9')	s=s*10+c-'0',c=getchar();
	return s*w;
}
void dfs(int nx,int ny,int step,int number)
{
	a[nx][ny].sum=step;//记录步数 
	a[nx][ny].num=number;//防止重复 
	if(nx==x&&ny==y){ans=ans==-1?step:min(step,ans);return ;}//更新最最小值 
	if(a[a[nx][ny].gx][a[nx][ny].gy].num==number)	return ;//防止重复 
	dfs(a[nx][ny].gx,a[nx][ny].gy,step+1,number);//总感觉会爆栈 
	return ;
}
void output()//输出 
{
	if(ans==-1)
		cout<<"impossible"<<endl;
	else
		cout<<ans*v<<endl;
}
int main()
{
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	memset(a,-1,sizeof(a));
	int n=read(),m=read();
	v=read();x=read();y=read();
	ans=-1;
	for(int i=n;i>=1;--i)
		for(int j=1;j<=m;++j)
		{
			a[i][j].gx=read();
			a[i][j].gy=read();
		}
	for(int i=1;i<=n;++i)	dfs(1,i,0,i);//暴力出奇迹！ 
	output();
	return 0;
}
