//#define FI
#include<bits/stdc++.h>
#define For(i,l,r) for(int i=(l);i<=(r);i++)
const int dx1[8]={-1,-1,-2,-2,1,1,2,2};
const int dy1[8]={-2,2,-1,1,-2,2,-1,1};
const int dx2[4]={-2,-2,2,2};
const int dy2[4]={2,-2,2,-2}; 
struct node{
	int x,y;
} a[2000000];
int t1[1005][1005],t2[1005][1005];
int n,m;
using namespace std;
void BFS1(){
	int head,tail,xx,yy,x,y;
	memset(t1,-1,sizeof(t1));
	memset(a,0,sizeof a); 
	head=tail=1;
	a[1].x=n;  a[1].y=m;
	t1[n][m]=0;
	while(head<=tail){
		x=a[head].x;
		y=a[head].y;
		For(i,0,7){
			xx=x+dx1[i];
			yy=y+dy1[i];
			if (xx>=1 && xx<=n && yy>=1 && yy<=m && t1[xx][yy]==-1){
				tail++;
				a[tail].x=xx;
				a[tail].y=yy;
				t1[xx][yy]=t1[x][y]+1;
			}
		}
		head++;
	}
}
void BFS2(){
	int head,tail,xx,yy,x,y;
	memset(t2,-1,sizeof(t2));
	memset(a,0,sizeof a); 
	head=tail=1;
	a[1].x=1;  a[1].y=1;
	t2[1][1]=0;
	while(head<=tail){
		x=a[head].x;
		y=a[head].y;
		For(i,0,3){
			xx=x+dx2[i];
			yy=y+dy2[i];
			if (xx>=1 && xx<=n && yy>=1 && yy<=m && t2[xx][yy]==-1){
				tail++;
				a[tail].x=xx;
				a[tail].y=yy;
				t2[xx][yy]=t2[x][y]+2;
			}
		}
		head++;
	}
}
int main(){
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	
	int ans;
	cin>>n>>m;
	BFS1();
	BFS2();
	ans=n*m;
	/*/debug
	For(i,1,n){
		For(j,1,m)
			cout<<t1[i][j]<<" ";
		cout<<endl;
	}/*/
	/*/debug
	For(i,1,n){
		For(j,1,m)
			cout<<t2[i][j]<<" ";
		cout<<endl;
	}/*/
	For(i,1,n)
		For(j,1,m)
			if (t1[i][j]!=-1&&t2[i][j]!=-1)
				ans=min(ans,max(t1[i][j],t2[i][j]));
	cout<<ans<<"s";			
	return 0;
}

