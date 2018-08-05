#include<bits/stdc++.h>
using namespace std;
int a[50010],b[50010];
int main(){
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	int i,n,q,s=0,j;
	cin>>n>>q;
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=1;i<=q;i++) cin>>b[i];
	for(i=1;i<=q;i++){
		for(j=1;j<=n;j++)
			if(a[j]>b[i]&&a[j-1]<=b[i]) s++;
		cout<<s<<endl;
		s=0;
	}
	return 0;
}
