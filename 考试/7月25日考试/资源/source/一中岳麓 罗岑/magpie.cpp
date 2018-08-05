#include <bits/stdc++.h>
using namespace std;
const int MN=(1000+5);
int dx2[]={-1,-2,-2,-1,1,2,2,1},dy2[]={-2,-1,1,2,-2,-1,1,2};
long long a[MN][MN],b[MN][MN],n,m,ans=0x7fffffff;
int dx1[]={-2,2,2,-2},dy1[]={2,2,-2,-2};
void bfs1(){
	queue<int>x,y;
	a[1][1]=0,
	x.push(1),y.push(1);
	while(!x.empty()){
		for(int k=0;k<4;k++){
			int tx=x.front()+dx1[k];
			int ty=y.front()+dy1[k];
			if(tx>n||ty>m||tx<1||ty<1)
				continue;
			if(a[tx][ty]==-1)
				a[tx][ty]=a[x.front()][y.front()]+2,
				x.push(tx),y.push(ty);	
		}
		x.pop(),y.pop();
	}
}
void bfs2(){
	queue<int>x,y;
	b[n][m]=0,
	x.push(n),y.push(m);
	while(!x.empty()){
		for(int k=0;k<8;k++){
			int tx=x.front()+dx2[k];
			int ty=y.front()+dy2[k];
			if(tx>n||ty>m||tx<1||ty<1)
				continue;
			if(b[tx][ty]==-1)
				b[tx][ty]=b[x.front()][y.front()]+1,
				x.push(tx),y.push(ty);	
		}
		x.pop(),y.pop();
	}
}
void init(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			a[i][j]=b[i][j]=-1;
}
int main(){
	//freopen("magpie.in","r",stdin);
	//freopen("magpie.out","w",stdout);
	init(),bfs1(),bfs2(); 
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(a[i][j]!=-1&&b[i][j]!=-1)
				ans=min(max(a[i][j],b[i][j]),ans);
	cout<<ans<<'s';		
	return 0;
}
