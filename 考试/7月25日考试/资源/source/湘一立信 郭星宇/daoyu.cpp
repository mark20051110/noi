#include<cstdio>
#include<iostream>
using namespace std;
int a[50000+10],b[50000+10];
bool c[50000+10];
int i,j,k,n,m;
int cha(){
	int t=0,sum=0;
	for(k=2;k<=n;k++){
		if(c[k]==1&&c[k-1]!=1)++sum;
		if(c[k]==0) t=1;
	}
	if(c[n]==1&&sum>0)--sum;
	if(t==1)++sum;
	printf("%d\n",sum);
}
int main(){
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)scanf("%d",&a[i]);
	for(i=1;i<=m;i++)scanf("%d",&b[i]);
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			c[j]=0;
			if(b[i]>=a[j])c[j]=1;
		}
		cha();
	}
	return 0;
}

