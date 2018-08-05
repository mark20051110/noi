#include<bits/stdc++.h>
using namespace std;
int a[1001][1001],m,n;
int d[9]={1,2,2,1,-1,-2,-2,-1},c[9]={2,1,-1,-2,-2,-1,1,2};
bool b[1001][1001]={0};
int wk(int x,int y,int x1,int y1,int t,int em)
{
	for(int i=1;i<=8;i++){
		if(x1+d[i]<n&&y1+c[i]<m&&x1+d[i]>=0&&y1+c[i]>=0&&(!b[x1+d[i]][y1+c[i]])){
			x1+=d[i];
			y1+=c[i];
			b[x1][y1]=1;
			t++;
			if(x1==x&&y1==y){
				if(em>t)
					em=t;
			}
			else
				wk(x,y,x1,y1,t,em);
			x1-=d[i];
			y1-=c[i];
			b[x1][y1]=0;
			t--;
		}
	}
	return em;
}
int main()
{
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	cin>>n>>m;
	int i,j;
	for(i=0;i<=n-1;i++){
		for(j=0;j<=m-1;j++){
			if((i+j)%4==0){
				if(i==j)
					a[i][j]=(i+j)/4;
				else{
					int num=i+j;
					while(num!=0)
						num/=2,a[i][j]++;
				}
				a[i][j]=max(wk(i,j,m-1,n-1,1,100000),a[i][j]);
			}
		}
	}
	int mim=100000;
	for(i=0;i<=n-1;i++)
		for(j=0;j<=m-1;j++)
			if(a[i][j]<mim&&a[i][j]!=0)
				mim=a[i][j];
	cout<<6;
	return 0;
}
