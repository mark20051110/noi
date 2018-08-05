#include<bits/stdc++.h>
using namespace std;
struct{
	int c;
	int f;
}a[1010][110];
int main(){
	int i,n,m,v,x,y,j,p,k,l,mnn=1000000,sum=0,z,u;
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	cin>>n>>m>>v>>x>>y;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin>>a[i][j].c>>a[i][j].f;
	for(j=1;j<=m;j++){
		sum=0;
		u=0;
		p=a[1][j].c;
		k=a[1][j].f;
		if(p>1)
			sum=sum+(p-1)*v;
		while(p!=x||k!=y){
			l=p;
			p=a[p][k].c;
			k=a[p][k].f;
			if(p>l){
				z=p-l;
				sum=sum+v*z;				
			}
			else if(p<l)
				sum=sum+(l-p)*v;
			u++;
			if(u>=10000){
				sum=1000001;
				break;
			}
		}
		if(sum<mnn)
			mnn=sum;
	}
	if(mnn!=1000000)cout<<mnn;
	else cout<<"impossible";
	return 0;
}
