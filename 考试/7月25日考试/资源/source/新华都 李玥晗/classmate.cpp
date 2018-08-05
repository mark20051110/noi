#include<bits/stdc++.h>
using namespace std;
long long ans[102];
short cx,cy,v;
int child[1000][100];
struct tree{
	int fatherx,fathery;
}a[1002][102];
int ch(int x,int y,int ansm){
	int i,j,k;
	if(a[x][y].fatherx==cx&&a[x][y].fathery==cy)
	  if(x>=cx)
	    return ansm+(x-cx)*v;
	  else
	    return ansm+(cx-x)*v;
	else 
	  if(x>=a[x][y].fatherx)
	    ch(a[x][y].fatherx,a[x][y].fathery,ansm+(x-a[x][y].fatherx)*v);
	  else
	    ch(a[x][y].fatherx,a[x][y].fathery,ansm+(a[x][y].fatherx-x)*v);
}
int main(){
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	short n,m,f=2;
	int i,j;
	cin>>n>>m>>v>>cx>>cy;
	for(i=1;i<=n;i++) 
	  for(j=1;j<=m;j++){
	  cin>>a[i][j].fatherx>>a[i][j].fathery;
	  if(a[i][j].fatherx==cx&&a[i][j].fathery==cy){
	    if(i==1) f=1;
		child[i][j]=1;
	  }
	  
	} 
	for(int k=1;k<=100;k++)
	for(i=1;i<=n;i++)
	  for(j=1;j<=m;j++)
	    if(child[a[i][j].fatherx][a[i][j].fathery]==1)
	      child[i][j]=1;
	for(i=1;i<=m;i++)
	  if(child[1][i]==1) f=1;
	if(f==2){cout<<"impossible";return 0;}
	for(i=1;i<=m;i++) ans[i]=ch(1,i,0);
	sort(ans+1,ans+m+1);
	cout<<ans[1];
	return 0;
}
