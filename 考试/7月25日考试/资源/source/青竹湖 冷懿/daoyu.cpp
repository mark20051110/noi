#include<bits/stdc++.h>
using namespace std;
int a[50000];
bool b[50000];
int ans,n,m;
inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-') w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){s=s*10+ch-'0';ch=getchar();}
	return s*w;
} 
int search(int x){
	int i;
	for(i=1;i<=n;i++)
		if(a[i]>x) b[i]=true;
		else b[i]=false;
	b[n+1]=false;
	for(i=1;i<=n;i++)
		if(b[i]==true&&b[i+1]==false) ans++; 
}
int main(){
	int i,x,pd2=0;
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	n=read(),m=read();
	for(i=1;i<=n;i++){
		a[i]=read();
		if(a[i]<a[i-1])
			pd2=1;
	}
	for(i=1;i<=m;i++){
		ans=0;
		x=read();
		if(pd2==0&&x<a[n])
			if(x<a[n]){
				printf("1\n");
				continue; 
			}
			else{
				printf("0\n");
				continue;
			}
		search(x);
		printf("%d\n",ans);
	}
	return 0;
}
