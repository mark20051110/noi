#include <bits/stdc++.h>
int a[50001];
int book[50001];
using namespace std;
int main(){
	int i,j,k,n,m,min1,min2,x,y,ans=0;
	FILE *in,*out;
	in=fopen("mj.in","r");
	out=fopen("mj.out","w");
	fscanf(in,"%d",&n);
	k=n-1;
	for(i=1;i<=n;i++)
	fscanf(in,"%d",&a[i]);
	sort(a+1,a+1+n);
	min1=1;
	min2=2;
	while(k){
		ans+=a[min2]+a[min1];
		a[min2]+=a[min1];
		a[min1]=10000;
		for(i=1;i<=n;i++)
		if(a[i]<a[min1]&&min2!=i)min1=i;
		for(i=1;i<=n;i++)
		if(a[i]<a[min2]&&min1!=i)min2=i;
		k--;
	}
	fprintf(out,"%d",ans);
	return 0;
}
