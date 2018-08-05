#include <bits/stdc++.h>
using namespace std;
int n,a[50005],top,ans;
int main(){
	register int i,j,k;
	scanf("%d",&n),top=n;
	for(i=1;i<=n;++i){
		scanf("%d",&a[i]),j=i;
		while(a[j]<a[j/2]&&j>=1) swap(a[j],a[j/2]),j/=2;
	}
	while(top>1){
		if(a[2]<a[3]) a[2]+=a[1],ans+=a[2];
		else a[3]+=a[1],ans+=a[3];
		a[1]=a[top--],j=1;
		while(j<=top){
			if((a[j]<a[j*2]&&j*2<=top)||(a[j]<a[j*2+1]&&j*2+1<=top)){
				if(a[j*2]<a[j*2+1]||(j*2+1>top))
					swap(a[j],a[j*2]),j*=2;
				else swap(a[j],a[j*2+1]),j*=2,++j;
			}
			else break;
		}
	}
	printf("%d",ans);
	return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int n,a[50005],b[50005],all=0;
void add(int l,int r){
	if(r==l) return;
	all+=b[r]-b[l-1];
	if((r-l+1)%2){
		int mid=(l+r)/2;
		if(b[mid]-b[l-1]>=b[r]-b[mid-1]) add(mid,r),add(l,mid-1);
		else add(l,mid),add(mid+1,r);
	}
	else add(l,(l+r)/2),add((l+r)/2+1,r);
}
int main(){
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	register int i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		scanf("%d",&a[i]);
		b[i]=b[i-1]+a[i];
	}
	add(1,n);
	printf("%d",all);
	return 0;
}
*/
