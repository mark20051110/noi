#include <bits/stdc++.h>
using namespace std;
int no,n,m,a[50005],q[50005];
bool bo;
int main(){
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	register int i,j,k;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;++i) scanf("%d",&a[i]);
	for(i=1;i<=m;++i) scanf("%d",&q[i]);
	for(i=1;i<=m;++i){
		no=0,bo=1;
		for(j=1;j<=n;++j){
			if(a[j]>q[i]&&bo) ++no,bo=0;
			else if(a[j]<=q[i]) bo=1;
		}
		printf("%d\n",no);
	}
	return 0;
}
