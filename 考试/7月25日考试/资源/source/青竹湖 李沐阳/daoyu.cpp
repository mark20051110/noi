#include <bits/stdc++.h>
using namespace std;
int a[50010],b[50010];
int main(){
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	int n,Q,q,i,j,s;
	cin>>n>>Q;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=Q;i++){
		cin>>q;
		s=0;
		memset(b,0,sizeof(b));
		for(j=1;j<=n;j++)
			if(a[j]<=q)	b[j]=1;
		for(j=2;j<=n;j++)
			if(b[j]==1&&b[j-1]==0)
				s++;
		if(b[n]==0)	s++;
		cout<<s<<endl;
	}
	return 0;
}
