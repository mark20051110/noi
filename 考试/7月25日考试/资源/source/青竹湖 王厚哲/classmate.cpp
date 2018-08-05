#include <bits/stdc++.h>
using namespace std;
int n,m,v,x,y,i,j,k,nown,nowm,woo=0,minn=2000000000;
int numn[1001][101],numm[1001][101];
int main(){
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	scanf("%d%d%d%d%d",&n,&m,&v,&x,&y);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d%d",&numn[i][j],&numm[i][j]);
	for(k=1;k<=m;k++){             
		bool p=1;
		bool was[n+5][m+5];
		memset(was,true,sizeof(was));
		nown=1,nowm=k,woo=0;
		while(true){
			woo=woo+v*abs(nown-numn[nown][nowm]);
			int nx=nown,ny=nowm;
			nown=numn[nx][ny];
			nowm=numm[nx][ny];
			if(nown==nx&&nowm==ny) break;
			if(was[nown][nowm]) was[nown][nowm]=false;
			else{p=0;break;}
		}
		if(p) minn=min(minn,woo);
	}
	if(minn!=2000000000) cout<<minn;
	else cout<<"impossible";
	return 0;
}
