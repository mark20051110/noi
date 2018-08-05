#include<bits/stdc++.h>
#define For(i,l,r) for(int i=(l);i<=(r);i++)
using namespace std;
struct Node{
	int w;
	int n;
	int child[7];
}a[300000];

int ans=0;
int n,m;
int search(int now){
	int tmp=a[now].w;
	For(i,1,a[now].n)
		tmp+=search(a[now].child[i]);
	if(tmp>ans && tmp<=m)
		ans=tmp;
//	cout<<now<<" "<<tmp<<endl;			//DEBUG 
	return tmp;
}

int main(){
	int Q,W,F,root;
	//freopen("pearl.in","r",stdin);
	//freopen("pearl.out","w",stdout); 
	cin>>n>>m;
	For(i,1,n){
		scanf("%d%d%d",&Q,&W,&F);
		a[Q].w=W;
		if (F==0) root=Q;
		else  {
			a[F].n++;
			a[F].child[a[F].n]=Q;
		}
	}
	search(root);
	cout<<ans;
	return 0;
} 
