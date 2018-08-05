#include <bits/stdc++.h>
int a[50001];
short book[50005]={1};
short xindalu[50005];
using namespace std;
int lef(int x){
	int rig(int );
	int i,j,k,n,m;
	for(i=x-1;i>=1;i--)
	if(book[i]==0&&xindalu[i]!=1){
		if(rig(x)==1)
		while(book[i]!=1&&i>=2){
			xindalu[i]=1;
			i--;
		}
	return 1;
	}
	return 0;
}
int rig(int x){
	int i,j,k,n,m;
	for(i=x+1;i<=n;i++)
	if(book[i]==0&&xindalu[i]!=1){
		if(lef(x)==1)
		while(book[i]!=1&&i<=n-1){
			xindalu[i]=1;
			i++;
		}
	return 1;
	}
	return 0;
}
int main(){
	FILE *in,*out;
	in=fopen("daoyu.in","r");
	out=fopen("daoyu.out","w");
	int i,j,k,n,m,v,num,ans,bian,bian1;
	fscanf(in,"%d%d",&n,&m);
	for(i=1;i<=n;i++)
	fscanf(in,"%d",&a[i]);
	for(v=1;v<=m;v++){
		fscanf(in,"%d",&k);
		num=0;
		ans=1;
		book[n+1]=1;
		bian1=n;
		bian=1;
		for(i=1;i<=n;i++)
		xindalu[i]=0;
		for(i=1;i<=n;i++)
		book[i]=0;
		for(i=1;i<=n;i++)
		if(a[i]<=k){book[i]=1;num++;}
		if(num==0)fprintf(out,"1\n");
		if(num==n)fprintf(out,"0\n");
		else if(num!=0&&num!=n){
			for(i=1;i<=n;i++)
			if(book[i]==1&&lef(i)!=0&&rig(i)!=0)ans++;
		fprintf(out,"%d\n",ans);
		}
	}
	return 0;
}
