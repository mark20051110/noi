#include <bits/stdc++.h>
using namespace std;
int n,m,head,tail,ans;
int niu[2][8]={1,1,-1,-1,2,2,-2,-2,
				2,-2,2,-2,1,-1,1,-1};//ţ����һ��զ�� 
int zhi[2][4]={2,2,-2,-2,
				2,-2,2,-2};//֯Ů��һ��զ�� 
struct queue
{
	int x;//������ 
	int y;//������ 
}que[1000001];//����ר�ö��� 
struct mapp
{
	bool niu;//ţ���Ƿ񵽹� 
	int niustep;//�߶��ٲ����� 
	bool zhi;//ͬ�� 
	int zhistep;
}a[1001][1001];
int read()//��� 
{
	int s=0,w=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')	w=-1;c=getchar();}
	while(c>='0'&&c<='9')	s=s*10+c-'0',c=getchar();
	return s*w;
}
void zhi_bfs()
{
	int tx,ty,nx,ny;
	while(head<tail)//�����в�Ϊ��ʱ(tailָ���β�ĺ�һλ) 
	{
		nx=que[head].x;ny=que[head].y;//׼����չ 
		for(int i=0;i<4;i++)//֯Ůֻ��4������ 
		{
			tx=zhi[0][i]+nx;
			ty=zhi[1][i]+ny;
			if(tx<1||tx>n||ty<1||ty>m||a[tx][ty].zhi)//���Խ����Ѿ��߹� 
				continue;
			a[tx][ty].zhistep=a[nx][ny].zhistep+1;
			a[tx][ty].zhi=true;//�Ѿ��߹������ 
			que[tail].x=tx;que[tail].y=ty;//�����β���Ժ���չ 
			++tail;//������չ 
		}
		++head;//������չ 
	}
	return ;
}
void niu_bfs()//ͬzhi_bfs 
{
	int tx,ty,nx,ny;
	while(head<tail)
	{
		nx=que[head].x;ny=que[head].y;
		for(int i=0;i<8;i++)//ţ����8������ 
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
	a[1][1].zhi=true;//�Ȱ��Լ���� 
	head=1;tail=2;//��ʼ������ 
	que[head].x=1;que[head].y=1;//�Լ���� 
	zhi_bfs();//���� 
	return ;
}
void nl()//ͬ�� 
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
			if(a[i][j].niu&&a[i][j].zhi)//����������ܵ� 
				ans=min(max(a[i][j].niustep,a[i][j].zhistep*2/*֯Ů����һ��*/),ans);
	return ;
}
void output()
{
	if(ans==1e9)//�����ܡ��� 
		cout<<"impossible"<<endl;
	else
		cout<<ans<<'s'<<endl;
	return ;
}
void print()//�������õ� 
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
