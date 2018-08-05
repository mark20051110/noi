#include<cstdio>
#include<iostream>
using namespace std;
int a[50000+10];
int i,j,n,sum;
int main(){
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	scanf("%d",&n);
	for(i=1;i<=n;++i)scanf("%d",&a[i]);
	for(i=1;i<n;++i)
		for(j=i+1;j<=n;++j)
			if(a[i]>a[j])swap(a[i],a[j]);
	for(i=1;i<=n;i++)sum+=a[i];
	if(n<=3){
		if(n==2)printf("%d",sum);
		else printf("%d",sum+a[1]+a[2]);
		return 0;
	}
	for(i=1;n>0;i++){
		sum*=2;
		n/=2;
	}
	printf("%d",sum);
	return 0;
}
