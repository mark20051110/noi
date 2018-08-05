#include<bits/stdc++.h>
#include <sstream>
#define For(i,l,r) for(int i=(l);i<=(r);i++)
#define ll long long
struct TP{
	int x,y;
};
using namespace std;

const char* name="classmate";
TP a[10][1000000];
int n[10];
int randx(int l,int r){
	return round(rand()*1.0/RAND_MAX*(r-l)+l);
}

void in(int S,TP item){ //将item放入S集 
	n[S]++;
	a[S][n[S]]=item;
}
TP out(int S){	//取出S集中任意一个元素 
	int i=randx(1,n[S]);
	TP item=a[S][i];
	a[S][i]=a[S][n[S]--];
	return item;
}
void makedata(){

	int n=randx(1000,1000);
	int m=randx(100,100);
	int v=randx(1,5); 
	int x=randx(1,n);
	int y=randx(1,m);
	TP tmp;
	For(i,1,n)
		For(j,1,m)
		if (i!=1||j!=1)
		{
			tmp.x=i;tmp.y=j;
			in(1,tmp);
		//	if (randx(1,5)==1) in(1,tmp); 
		}
	printf("%d %d %d %d %d\n",n,m,v,x,y);
	For(i,1,n){
		For(j,1,m)
		if (i!=n || j!=m)
		{
			tmp=out(1); 
			printf("%d %d ",tmp.x,tmp.y);
		}
		if (i!=n)
		printf("\n");
	}
	printf("1 1\n");
}		

int main() {

	int l,r;
	string Dfile;
	srand(time(NULL));
	cin>>l>>r;
	For(i,l,r){
		Dfile=string(name);
		char tmp[3];
		itoa(i,tmp,10);
		Dfile=Dfile+tmp+".in";
		freopen(Dfile.c_str(),"w",stdout);
		makedata();
	//	system((string("c:\\Windows\\System32\\notepad ")+Dfile).c_str());
	}
	return 0;
}

