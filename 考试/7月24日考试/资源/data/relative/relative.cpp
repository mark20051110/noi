#include<bits/stdc++.h>
#define For(i,l,r) for(int i=(l);i<=(r);i++)
using namespace std;
int ans=600000,maxd=0;
struct Node{
	int l,r,f;
}a[600000];
void search(int now,int dist,int past){
	//printf("arrived %d pasted %d,f=%d,l=%d,r=%d\n",now,past,a[now].f,a[now].l,a[now].r);//DEBUG
	if (dist>maxd || dist==maxd && now<ans) {
		ans=now;
		maxd=dist;
	}
	if (a[now].f!=0&&a[now].f!=past) 
		search(a[now].f,dist+1,now);
	if (a[now].l!=0&&a[now].l!=past) 
		search(a[now].l,dist+1,now);
	if (a[now].r!=0&&a[now].r!=past) 
		search(a[now].r,dist+1,now);
}

int main(){
	int n,c,lchild,rchild;
	cin>>n>>c;
	For(i,1,n){
		scanf("%d%d",&lchild,&rchild);
		if (lchild){
			a[i].l=lchild;
			a[lchild].f=i;
		}
		if (rchild){
			a[i].r=rchild;
			a[rchild].f=i;
		}
	}
	search(c,0,-1);
	cout<<ans;
	return 0;
}
 
