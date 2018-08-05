#include <bits/stdc++.h>
using namespace std;
int n,m,v,x,y;
int a[2001][2001],rear;
int now,cur,old,minx=0x7fffff,sy=0,os,of;
int main(){
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	cin>>n>>m>>v>>x>>y;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m*2;j++)
	cin>>a[i][j];
	os=1;
	of=1;
	while(of<=n&&os<=2*m){
		now=of;
		cur=os;
		rear=0;
		while(now<=n&&cur<=2*m){
	old=now;
		now=a[now][2*cur-1];
		rear+=abs(now-old)*v;
		cur=a[now][2*cur];
		if(a[now][2*cur-1]==x&&a[now][2*cur]==y){
			sy=1;
			if(rear<minx)
			minx=rear;
			break;
		}
	}
	os+=2;
	of+=2;
}
	if(sy) cout<<minx;
	else  cout<<"impossible";
	return 0;
}
