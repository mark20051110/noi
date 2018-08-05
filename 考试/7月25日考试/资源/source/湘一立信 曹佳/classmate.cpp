#include<bits/stdc++.h>
using namespace std;
int c[1001][101],room[1001][101],bj[1001][101],v,x,y;
int zfj(int cs,int fj,int jl){
	int i,k;
	if(bj[cs][fj]==1)return -1;
	if(cs==x&&fj==y)return jl;
	bj[cs][fj]=1;
	i=abs(c[cs][fj]-cs);
	k=zfj(c[cs][fj],room[cs][fj],jl+i*v);
	bj[cs][fj]=0;
	return k;
}
int main(){
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	int k,zx,i,j,n,m,Min=-1;
	scanf("%d%d%d%d%d",&n,&m,&v,&x,&y);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin>>c[i][j]>>room[i][j];
	for(k=1;k<=m;k++){
		zx=zfj(1,k,0);
		if(Min==-1&&zx!=-1)Min=zx;
		if(Min!=-1)Min=min(zx,Min);
	}
	if(Min==-1)cout<<"impossible";
	else cout<<Min;
}
