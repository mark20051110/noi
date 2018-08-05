#include<bits/stdc++.h>
using namespace std;
struct node{
	int n,m;
}ans[1000][500];    
int k=1;
int i,j,n,m,v,X,Y,pd=0,mind=100000;
inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-') w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){s=s*10+ch-'0';ch=getchar();}
	return s*w;
} 
void search(int x,int y,int dis){
	int i,j;
	if(ans[x][y].n-x!=0) dis+=v*abs(ans[x][y].n-x);
	if(x==X&&y==Y){
		mind=min(dis,mind);k++;
		return;
	}
	if(dis>mind) return;
	search(ans[x][y].n,ans[x][y].m,dis);
}
int main(){
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	n=read(),m=read(),v=read(),X=read(),Y=read();
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++){
			ans[i][j].n=read(),ans[i][j].m=read();
			if(ans[i][j].n==X&&ans[i][j].m==Y)
				pd=1;
		}
	if(pd==0){
		printf("impossible");
		return 0;	
	}	
	for(i=1;i<=m;i++)
		search(1,i,0);
	printf("%d",mind);
	return 0;
}
