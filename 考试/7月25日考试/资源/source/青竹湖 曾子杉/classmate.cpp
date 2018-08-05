#include<bits/stdc++.h>
using namespace std;
struct point{
	int x,y;
	int v;
}p[1001][1001];
int n,m,vx,xx,yy,minn=0x3f3f3f3f;
bool flag;
bool b[1001][1001];
void search(){
	queue<point> q;
	point x,y;
	int i,j,k;
	for(i=1;i<=m;i++){
		x.x=1;x.y=i;x.v=0;
		b[x.x][x.y]=1;
		q.push(x);
	}
	while(!q.empty()){
		x=q.front();q.pop();
		y.x=p[x.x][x.y].x;y.y=p[x.x][x.y].y;y.v=x.v+abs(x.x-y.x)*vx;
		if(b[y.x][y.y]==false){
			if(y.x==xx&&y.y==yy){
				flag=true;
				minn=min(minn,y.v);
				continue;
			}
			q.push(y);
			b[y.x][y.y]=1;
		}
	}
	return ;
}
int main(){
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	int i,j,k;
	scanf("%d%d%d%d%d",&n,&m,&vx,&xx,&yy);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d%d",&p[i][j].x,&p[i][j].y);
		}
	}
	search();
	if(!flag)cout<<"impossible"<<endl;
	else cout<<minn<<endl;
	return 0;
}

