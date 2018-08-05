#include<bits/stdc++.h>
using namespace std;
int n,m,v,x,y,z=1000001,a[1001][100][3];
int main(){
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	cin>>n>>m>>v>>x>>y;
	if(x==1){cout<<0; return 0;}
	for(int i=n;i>=1;i--)
	  for(int j=1;j<=m;j++){
	    cin>>a[i][j][0]>>a[i][j][1];
	    if(a[i][j][0]==x&&a[i][j][1]==y){
	        a[i][j][2]+=abs(i-x)*v;
	        if(i==1){cout<<a[i][j][2];return 0;}
		}
	  }
	for(int k=1;k<=sqrt(n)+1;k++)
	  for(int i=n;i>=1;i--)
	    for(int j=1;j<=m;j++)
	      if(a[a[i][j][0]][a[i][j][1]][2]>0){
	        a[i][j][2]+=abs(i-a[i][j][0])*v+a[a[i][j][0]][a[i][j][1]][2];
	        if(i==1)z=min(a[i][j][2],z);
	      }
	if(z==1000001)cout<<"inpossible";
	else cout<<z;
	return 0;
}
