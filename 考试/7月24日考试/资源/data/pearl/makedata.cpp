#include<bits/stdc++.h>
#define For(i,l,r) for(int i=(l);i<=(r);i++)
#define MAX_DEGREE 5
using namespace std;
int n[3];
int a[3][1000000];
int fa[1000000],v[1000000];
int randx(int l,int r){
	return l+rand()%(r-l+1);
} 

void in(int x,int y){
	n[x]++;
	a[x][n[x]]=y;
}
int out(int x){
	int y=randx(1,n[x]);
//	cout<<x<< " "<<y<<":\n";//DEBUG
	int re=a[x][y];
	a[x][y]=a[x][n[x]--];
	return re;
}
void create(){
	int num=200000;
	int V=0;
	int children,root,node1,node2;
	root=randx(1,num);
	For(i,1,num)
		if (i==root) in(1,i);
		else 		 in(2,i);
	V+=v[root]=randx(1,10000);
	while(n[2]>0){
		node1=out(1);
		if (n[1]==0) children=MAX_DEGREE;
		else  		 children=randx(0,MAX_DEGREE);
		//printf("%d %d:\n",children,node1);//DEBUG 
		while(children>0 && n[2]>0){
			node2=out(2);
			fa[node2]=node1;
			V+=v[node2]=randx(1,10000);
			//printf("%d ",node2);//DEBUG
			in(1,node2);
			children--;
		}
		//putchar('\n');//DEBUG
	}
	printf("%d %d\n",num,V/20);
	int k=1;
	For(i,1,num){
		printf("%d %d %d\n",k,v[k],fa[k]);
		k=(k+17)%num;
		if(k==0)
			k=num; 
	}
} 

int main(){
	srand(time(NULL));
	freopen("pearl9.in","w",stdout);
	create();
	return 0;
}
 
