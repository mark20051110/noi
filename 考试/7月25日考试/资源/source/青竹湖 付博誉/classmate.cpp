#include<bits/stdc++.h>
using namespace std;
int fl=1,s=0,x,y,v,vis=0,n,m;
struct{
	int x,y;
}a[1010][110];
int search(int i,int j){
	vis++;
	if(vis>n*m) return -1;
	if(a[i][j].y!=fl){
		s+=abs(a[i][j].x-fl)*v;
		fl=a[i][j].x;
	}
	if(i==x&&j==y) return s;
	search(a[i][j].x,a[i][j].y);	
}
int main(){
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	int i,j,spend;
	cin>>n>>m>>v>>x>>y;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin>>a[i][j].x>>a[i][j].y;
	spend=search(1,1);
	if(spend!=-1) cout<<spend;
	else cout<<"impossible";
	return 0;
}
