#include<bits/stdc++.h>
#define For(i,l,r) for(int i=(l);i<=(r);i++)
#define MAX_DEGREE 2
using namespace std;
int n[3];
int a[3][1000000];
int l[1000000],r[1000000];
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
	int num=500000;
	int children,root,node1,node2;
	root=randx(1,num);
	For(i,1,num)
		if (i==root) in(1,i);
		else 		 in(2,i);
	while(n[2]>0){
		node1=out(1);
		if (n[1]==0) children=MAX_DEGREE;
		else  		 children=randx(0,MAX_DEGREE);
		//printf("%d %d:\n",children,node1);//DEBUG 
		while(children>0 && n[2]>0){
			node2=out(2);
			if (!l[node1]) l[node1]=node2;
			else r[node1]=node2;
			//printf("%d ",node2);//DEBUG
			in(1,node2);
			children--;
		}
		//putchar('\n');//DEBUG
	}
	printf("%d %d\n",num,root);
	For(i,1,num)
		printf("%d %d\n",l[i],r[i]);
} 

int main(){
	srand(time(NULL));
	freopen("relative9.in","w",stdout);
	create();
	return 0;
}
 
