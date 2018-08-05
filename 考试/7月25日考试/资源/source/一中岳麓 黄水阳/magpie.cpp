#include <bits/stdc++.h>
using namespace std;
int n,m,n_x,n_y,z_x,z_y,tot,ma[2001][2001];
void calc(int a,int b,int c,int d){
	if(ma[a][b]!=-1||ma[c][d]!=-1) return ;
	ma[a][b]=1;
	ma[c][d]=1;
	if(a==c&&b==d) tot++;
	else calc(a-1,b-2,c+2,d+2);
	a++,b++,b++,c--,c--,d--,d--;
	ma[a][b]=-1;
	ma[c][d]=-1;
}
int main(){
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	cin>>n>>m;
	n_x=n;n_y=m;
	z_x=1;z_y=1;
	for(int i=0;i<=n;i++)
	for(int j=0;j<=m;j++)
	ma[i][j]=-1;
	tot=abs(n-m)*(min(n,m)/2);
	cout<<tot<<"s";
	return 0;
}
