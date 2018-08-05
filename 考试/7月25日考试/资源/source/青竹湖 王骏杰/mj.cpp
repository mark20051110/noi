#include <bits/stdc++.h>
using namespace std;
int n,a[50005],top,ans;
void put(int num){
	int j=num;
	while((a[j]<a[j*2]&&j*2<=top)||(a[j]<a[j*2+1]&&j*2+1<=top)&&j<=top){
		if((a[j*2]<a[j*2+1]||(j*2+1>top))) swap(a[j],a[j*2]),j*=2;
		else swap(a[j],a[j*2+1]),j*=2,++j;
	}
}
int main(){
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	register int i,j,k;
	scanf("%d",&n),top=n;
	for(i=1;i<=n;++i){
		scanf("%d",&a[i]),j=i;
		while(a[j]<a[j/2]&&j>1) swap(a[j],a[j/2]),j/=2;
	}
	while(top>1){
		if(a[2]<=a[3]) a[2]+=a[1],ans+=a[2];
		else a[3]+=a[1],ans+=a[3];
		a[1]=a[top],--top,j=1;
		put(1);
	}
	printf("%d",ans);
	return 0;
}
