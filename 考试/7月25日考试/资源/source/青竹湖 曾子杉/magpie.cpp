#include<bits/stdc++.h>
using namespace std;
struct point{
	int x,y;
	int t1,t2;
};
int m,n;
bool b1[1001][1001],b2[1001][1001];
int minn=0x7fffffff,a[1001][1001],w1[4][2]={{2,2},{-2,-2},{2,-2},{-2,2}},w2[8][2]={{1,2},{2,1},{-1,2},{-2,1},{-1,-2},{-2,-1},{1,-2},{2,-1}};
void bfs1(){
	point x,y;
	queue<point>q;
	x.x=1;x.y=1;x.t1=0;//b1[x.x][x.y]=1;
	q.push(x);
	while(!q.empty()){
		x=q.front();
		q.pop();
		for(int i=0;i<=3;i++){
			y.x=x.x+w1[i][0];y.y=x.y+w1[i][1];y.t1=x.t1+2;
			if(y.x>0&&y.x<=n&&y.y>0&&y.y<=m&&!b1[y.x][y.y]){
				q.push(y);
				b1[y.x][y.y]=1;
				a[y.x][y.y]=y.t1;
			}
		}
	}
	return;
}
void bfs2(){
	point x,y;
	queue<point>q;
	x.x=n;x.y=m;x.t2=0;//b2[x.x][x.y]=1;
	q.push(x);
	while(!q.empty()){
		x=q.front();
		q.pop();
		for(int i=0;i<=7;++i){
			y.x=x.x+w2[i][0];y.y=x.y+w2[i][1];y.t2=x.t2+1;
			if(y.x>0&&y.x<=n&&y.y>0&&y.y<=m&&!b2[y.x][y.y]){
				q.push(y);
				b2[y.x][y.y]=1;
				if(b1[y.x][y.y])minn=min(minn,max(a[y.x][y.y],y.t2));
			}
		}
	}
	return;
}
int main(){
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	int i,j,k;
	cin>>n>>m;
	bfs1();
	bfs2();
	cout<<minn<<"s";
	return 0;
}
