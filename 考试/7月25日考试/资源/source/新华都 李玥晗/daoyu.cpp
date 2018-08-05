#include<bits/stdc++.h>
using namespace std;
int a[50002],c[50002];short b[50002];
int main(){
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	int n,q,i,j,x;
	cin>>n>>q;
	for(i=1;i<=n;i++)
	  cin>>a[i];
	for(i=1;i<=q;i++){
		cin>>x;
		for(j=1;j<=n;j++){
			if(x>=a[j])
			  b[j]=0;
			else
			  b[j]=1;
		}
		int ans=0;
		for(j=1;j<=n;j++){
			if(b[j]==1&&b[j+1]==0)
			  ans+=1;
		}
		c[i]=ans;
	}
	for(i=1;i<=q;i++)
	  cout<<c[i]<<endl;
	return 0;
}
