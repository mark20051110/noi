#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	int l;
	int r;
}a[30000];
int Nnode=0;
void insert(int &now,int x){
	if (now==0){
		now=++Nnode;
		a[now].data=x;
		a[now].l=0;
		a[now].r=0;
	}else 	if (x<=a[now].data) insert(a[now].l,x);
	else	insert(a[now].r,x);
		
}
void traversal(int now){
	if (now==0) return;
	printf("%d ",a[now].data);
	traversal(a[now].l);
	traversal(a[now].r);
}
int main(){
	int root,x;
	root=0;
	while(scanf("%d",&x)>0)
		insert(root,x);
	traversal(root); 
	return 0;
} 
