#include<bits/stdc++.h>
using namespace std;
int n,m,v,x,y,tl=0,no=0;
struct xiaomin{
	int hy,hx;
}a[1005][105];
void f(int ny,int nx/*,int ney,int nex*/)
{
	if(no>=10000){
			cout<<"impossible";
			return ;
	}
	if(a[ny][nx].hy==x&&a[ny][nx].hx==y){
		cout<<tl;
		return ;
	}
	else {
		if(ny<a[ny][nx].hy||ny>a[ny][nx].hy) tl+=v;
		no++;
		f(a[ny][nx].hy,a[ny][nx].hx/*,a[a[ny][nx].hy][a[ny][nx].hx].hy,a[a[ny][nx].hy][a[ny][nx].hx].hx*/);
//		f(ney,nex/*,a[ney][nex].hy,a[ney][nex].hx*/);
	}
}
int main()
{
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	int i,j;
	cin>>n>>m>>v>>x>>y;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin>>a[i][j].hy>>a[i][j].hx;
	f(1,1/*,a[1][1].hy,a[1][1].hx*/);
	return 0;
}
