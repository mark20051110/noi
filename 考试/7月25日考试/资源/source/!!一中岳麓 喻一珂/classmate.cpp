#include <bits/stdc++.h>
using namespace std;
struct build
{
	int gx;//��Ҫȥ��¥�� 
	int gy;//��Ҫȥ�ķ��� 
	int sum;//���˼��� 
	int num;//��ֹ�ظ� 
}a[1000+10][100+10];
int ans,x,y,v;
int read()//��� 
{
	int s=0,w=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')	w=-1;c=getchar();}
	while(c>='0'&&c<='9')	s=s*10+c-'0',c=getchar();
	return s*w;
}
void dfs(int nx,int ny,int step,int number)
{
	a[nx][ny].sum=step;//��¼���� 
	a[nx][ny].num=number;//��ֹ�ظ� 
	if(nx==x&&ny==y){ans=ans==-1?step:min(step,ans);return ;}//��������Сֵ 
	if(a[a[nx][ny].gx][a[nx][ny].gy].num==number)	return ;//��ֹ�ظ� 
	dfs(a[nx][ny].gx,a[nx][ny].gy,step+1,number);//�ܸо��ᱬջ 
	return ;
}
void output()//��� 
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
	for(int i=1;i<=n;++i)	dfs(1,i,0,i);//�������漣�� 
	output();
	return 0;
}
