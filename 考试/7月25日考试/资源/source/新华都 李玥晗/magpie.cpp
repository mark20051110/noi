#include<bits/stdc++.h>
using namespace std;
int dt[1001][1001];
int ans=0,minn=999999999,n,m;
void dp(int x,int y,int p){
	if(dt[x][y]==1){
	  ans=max(max(x,y)-1,p);
	  minn=min(minn,ans);
	  return;
	}
	else{
	  if(x-2>=1){
	  	if(y-1>=1)
	  	  dp(x-2,y-1,p+1);
		if(y+1<=n)
		  dp(x-2,y+1,p+1);
	  }
	  if(x-1>=1){
	  	if(y-2>=1)
	  	  dp(x-1,y-2,p+1);
	  	if(y+2<=n)
		  dp(x-1,y+2,p+1);
	  }
	}
}
int main(){
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	int i,j;
	cin>>n>>m;
	for(i=1;i<=n;i+=2){
	  int y=(i-1)/2;
	  if(y%2==0)
	    for(j=1;j<=m;j+=4)
	  	  dt[i][j]=1;
	  else
	    for(j=3;j<=m;j+=4)
	      dt[i][j]=1;
	}
	dp(n,m,0);
	cout<<minn<<"s";
	return 0;
}
