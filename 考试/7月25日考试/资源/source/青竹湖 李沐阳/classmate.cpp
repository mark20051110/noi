#include <bits/stdc++.h>
using namespace std;
struct{
	int c,f;
}a[1001][101];
int find(int i,int j,int x,int y,int s,int v){
	if(a[i][j].c==i&&a[i][j].f==j)	return 9999999;
	if(a[i][j].c==x&&a[i][j].f==y)	return s+v;
	find(a[i][j].c,a[i][j].f,x,y,s+v,v);
}
int main(){
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	int n,m,v,x,y,mi=9999999,i,j,t=0;
	cin>>n>>m>>v>>x>>y;
	for(i=n;i>=1;i--)
		for(j=1;j<=m;j++){
			cin>>a[i][j].c>>a[i][j].f;
			if(a[i][j].c==x&&a[i][j].f==y)
				t=1;
		}
	if(t==0){
		cout<<"impossible";
		return 0;
	}		
	for(j=1;j<=m;j++)
		mi=min(mi,find(1,j,x,y,0,v));
	cout<<mi;
	return 0;
}
