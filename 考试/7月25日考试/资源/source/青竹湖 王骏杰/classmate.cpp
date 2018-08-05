#include <bits/stdc++.h>
using namespace std;
int n,m,v,x,y,minn=-1;
bool bo[1005][1005];
struct node{
	int floor,number,val,lx,ly;
}a[1005][1005];
inline void dfs(int X,int Y,int va){
	if(x==X&&y==Y){
		if(minn==-1) minn=va;
		else minn=min(minn,va);
		return;
	}
	bo[X][Y]=1,va+=a[X][Y].val;
	if(!bo[a[X][Y].floor][a[X][Y].number]) 
	dfs(a[X][Y].floor,a[X][Y].number,va);
}
int main(){
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	register int i,j,k;
	scanf("%d%d%d%d%d",&n,&m,&v,&x,&y);
	for(i=1;i<=n;++i)
	  for(j=1;j<=m;++j){
	  	scanf("%d%d",&a[i][j].floor,&a[i][j].number);
	  	a[i][j].val=v*(abs(i-a[i][j].floor));
	  }
	for(i=1;i<=m;++i){
		memset(bo,0,sizeof(bo));
		dfs(1,i,0);
	}
	if(minn==-1) printf("impossible");
	else printf("%d",minn);
	return 0;
}
