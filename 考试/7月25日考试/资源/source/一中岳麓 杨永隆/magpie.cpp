#include <bits/stdc++.h>
int a[1002][1002];
using namespace std;
int main(){
	int n,m;
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	cin>>n>>m;
	a[1][1]=0;
	a[2][3]=1;
	a[2][5]=2;
	a[2][7]=3;
	a[2][9]=4;
	a[3][2]=1;
	a[3][3]=2;
	a[3][4]=3;
	a[3][5]=2;
	a[3][6]=3;
	a[3][7]=4;
	a[3][8]=4;
	a[3][9]=5;
	a[3][10]=5;
	for(int i=1;i<=10;i++){
	if(i==4||i==6||i==8||i==10)
	a[4][i]=min(1+a[2][i-1],1+a[3][i-2]);
	else a[4][i]=a[3][i-2]+1;}
	for(int j=5;j<=1000;j++)
	for(int i=1;i<=10;i++)
	a[j][i]=min(a[j-2][i-1]+1,a[j-1][i-2]+1);
	cout<<a[n][m]<<"s";
	return 0;
}
