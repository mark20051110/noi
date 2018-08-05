#include<bits/stdc++.h>
using namespace std;
int n,qn;
int a[100000001],q;
int main(){
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	int i,j,k;
	scanf("%d%d",&n,&qn);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=qn;i++){
		scanf("%d",&q);
		int ans=0;
		for(j=1;j<=n;j++){
			if(a[j]>q&&a[j-1]<=q)ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}

