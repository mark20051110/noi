#include <bits/stdc++.h>
using namespace std;
int now,n,m,a[5000005][2],b[5000005][2],a_head=1,b_head=1,a_tail=1,b_tail=1,t=0;
int bo[1005][1005];
inline void put_b(int x,int y){
	if(bo[x][y]==1) return;
	if(bo[x][y]==2) printf("%ds",t),exit(0);
	bo[x][y]=1;
	b[++b_tail][0]=x,b[b_tail][1]=y;
}
inline void put_a(int x,int y){
	if(bo[x][y]==2) return;
	if(bo[x][y]==1) printf("%ds",t),exit(0);
	bo[x][y]=2;
	a[++a_tail][0]=x,a[a_tail][1]=y;
}
int main(){
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	register int i,j,k;
	scanf("%d%d",&n,&m),++n,++m;
	a[1][0]=a[1][1]=1,b[1][0]=n,b[1][1]=m;
	bo[1][1]=2,bo[n][m]=1;
	while(1){
		for(i=1;i<=2;++i){
		    ++t;
			now=b_tail;
		    while(b_head<=now){
			    if(b[b_head][0]-2>=1&&b[b_head][1]-1>=1) put_b(b[b_head][0]-2,b[b_head][1]-1);
			    if(b[b_head][0]-2>=1&&b[b_head][1]+1<=m) put_b(b[b_head][0]-2,b[b_head][1]+1);
			    if(b[b_head][0]+2<=n&&b[b_head][1]-1>=1) put_b(b[b_head][0]+2,b[b_head][1]-1);
			    if(b[b_head][0]+2<=n&&b[b_head][1]+1<=m) put_b(b[b_head][0]+2,b[b_head][1]+1);
			
			    if(b[b_head][0]-1>=1&&b[b_head][1]-2>=1) put_b(b[b_head][0]-1,b[b_head][1]-2);
			    if(b[b_head][0]-1>=1&&b[b_head][1]+2<=m) put_b(b[b_head][0]-1,b[b_head][1]+2);
			    if(b[b_head][0]+1<=n&&b[b_head][1]-2>=1) put_b(b[b_head][0]+1,b[b_head][1]-2);
			    if(b[b_head][0]+1<=n&&b[b_head][1]+2<=m) put_b(b[b_head][0]+1,b[b_head][1]+2);
			    ++b_head;
		    }
		}
		now=a_tail;
		while(a_head<=now){
			if(a[a_head][0]-2>=1&&a[a_head][1]-2>=1) put_a(a[a_head][0]-2,a[a_head][1]-2);
			if(a[a_head][0]+2<=n&&a[a_head][1]-2>=1) put_a(a[a_head][0]+2,a[a_head][1]-2);
			if(a[a_head][0]-2>=1&&a[a_head][1]+2<=m) put_a(a[a_head][0]-2,a[a_head][1]+2);
			if(a[a_head][0]+2<=n&&a[a_head][1]+2<=m) put_a(a[a_head][0]+2,a[a_head][1]+2);
			++a_head;
		}
	}
	return 0;
}
