#pragma G++ optimize(3)//臭氧优化 
#pragma GCC optimize(3)
#include <bits/stdc++.h>
using namespace std;
int n,m,v,x,y;
struct xinxi{
	int cen;
	int fangjian;
}a[1001][101];
int minn=1e9;
inline void read(int &o)//快读 
{
	char p;
	int data=0;
	p=getchar();
	while(p>='0'&&p<='9') {data=data*10+p-'0';p=getchar();}
	o=data;
	return;
}
void dfs(int xx,int yy,int p)
{
	if(xx==x&&yy==y) {minn=min(p*v,minn);return;}
	if(a[xx][yy].cen!=xx) ++p;
	dfs(a[xx][yy].cen,a[xx][yy].fangjian,p);
	return;
}
int main()
{
	int mx,my;
	register int i,j;
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	read(n);read(m);read(v);read(x);read(y);//赋值(可怜快读) 
	for(i=1;i<=n;++i)//传说++i比i++快 
		for(j=1;j<=n;++j)
		{
			read(mx);
			read(my);
			a[i][j].cen=mx;
			a[i][j].fangjian=my;
		}
	for(i=1;i<=m;++i)
		dfs(1,i,0);
	printf("%d",minn);
}
