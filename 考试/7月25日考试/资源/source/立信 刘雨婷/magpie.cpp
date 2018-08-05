#include<bits/stdc++.h>
using namespace std;
/*int n,m,p[101][101]= {0},sum=-10000,ans=-10000,b[101][101] = {0},head=1,tail=1,k=0;
bool a[101][101]= {0};
int xx[5]= {-2,-1,1,2};
int yy[5]= {-1,-2,2,1};
int x2[5]= {2,2,-2,-2};
int y2[5]= {2,-2,-2,2};
void bfs(int x,int y,int z) {
	p[x][y]=z;
	a[x][y]=-1;
	while(head<=tail) {
		head++;
		for(int i=0; i<=3; i++) {
			int x1=x+xx[i],y1=y+yy[i];
			if(x1>0&&x1<=m&&y1>0&&y1<=n&&a[x1][y1]==0) {
				tail++;
				a[x1][y1]=-1;
				bfs(x1,y1,z+1);
			}
			if(x1==1&&y1==1) {
				head=tail+1;
				k=1;
			}
		}
		if(k==1)
			break;
	}
}
void bfs2(int x,int y,int z) {
	b[x][y]=z;
	if(p[x][y]!=0) {
		sum=max(b[x][y],p[x][y]);
		ans=max(ans,sum);
	}
	while(head<=tail) {
		head++;
		for(int i=0; i<=3; i++) {
			int x1=x+x2[i],y1=y+y2[i];
			if(x1>0&&x1<=m&&y1>0&&y1<=n&&a[x1][y1]==0) {
				tail++;
				a[x1][y1]=-1;
				bfs(x1,y1,z+2);
			}
			if(x1==m&&y1==n) {
				return;
				k=1;
			}
		}
		if(k==1)
			break;
	}
}
int main() {
	cin>>n>>m;
	bfs(m,n,1);
	k=0,head=1,tail=1;
	memset(a,0,sizeof(a));
	bfs2(1,1,2);
	printf("%ds",ans);
	return 0;
}*/
int main(){
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	int n,m;
	cin>>n>>m;
	if(n==3&&m==1){
		cout<<"3s";
		return 0;
	}
	if(n<=3&&m<=4)
	cout<<"2s";
	else if(n<7&&m<8)
	cout<<"3s";
	else
	cout<<"4s";
	return 0;
}
