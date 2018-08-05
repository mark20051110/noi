#include <bits/stdc++.h>
int x[1001][101][2];
using namespace std;
int main(){
	int i,j,k,n,t,m,x1,y1,p,p1,yuan,yuan1,ans=0,pp=0,MIN=1001;
	FILE *in,*out;
	in=fopen("classmate.in","r");
	out=fopen("classmate.out","w");
	fscanf(in,"%d%d%d%d%d",&n,&m,&t,&x1,&y1);
	for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
	fscanf(in,"%d%d",&x[i][j][0],&x[i][j][1]);
	for(i=1;i<=m;i++){
		p=i;
		p1=1;
		ans=0;
		while(x[p1][p][0]!=x1||x[p1][p][1]!=y1){
			yuan=p;
			yuan1=p1;
			p1=x[p1][p][0];
			p=x[yuan1][p][1];
			ans+=abs(p1-yuan1)*t;
		}
		yuan=p;
		yuan1=p1;
		p1=x[x1][y1][0];
		p=x[x1][y1][1];
		ans+=abs(p1-yuan1)*t;
		if(ans<MIN)MIN=ans;
	}
	fprintf(out,"%d",MIN);
	return 0;
}
