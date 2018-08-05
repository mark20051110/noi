#include<bits/stdc++.h>
#define For(i,l,r) for(int i=(l);i<=(r);i++)
struct Node{
	int x;
	int y;
	int data;
} hp[1000000];
int t=0,n;
int a[1000000],b[1000000];
void swap(Node &x,Node &y){
	Node tmp;
	tmp=x;
	x=y;
	y=tmp; 
}

void push(int x,int y){
	int k;
	hp[++t].x=x;
	hp[t].y=y;
	hp[t].data=a[x]+b[y];
	k=t;
	while(k>1){
		if (hp[k].data<hp[k/2].data){
			swap(hp[k],hp[k/2]); 
			k/=2; 
		}else break;
	}
}
void pop(int &x,int &y){
	int k,kk;
	x=hp[1].x;y=hp[1].y;
	printf("%d ",hp[1].data);
	hp[1]=hp[t--];
	k=1;
	while(k*2<=t){
		kk=k*2;
		if (kk+1<=t && hp[kk+1].data<hp[kk].data) kk++;
		if (hp[k].data>hp[kk].data){
			swap(hp[k],hp[kk]);
			k=kk;
		}else break;
	}
}
using namespace std;
int main(){
	int x,y;
	cin>>n;
	For(i,1,n)
		scanf("%d",&a[i]);
	For(i,1,n)
		scanf("%d",&b[i]);
	sort(a+1,a+1+n);
	sort(b+1,b+1+n);
	For(i,1,n)
		push(i,1);
	For(i,1,n){
		pop(x,y);
		if(y<n) 
			push(x,y+1);
	}
	return 0;
}

