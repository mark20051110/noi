#include<bits/stdc++.h>
using namespace std;
int a[1001][101][3];
bool b[1001][101];
int ans[101]={18874};
int m,n,v,x,y;
void room(int x1,int q1,int v1,int i)
{
	if(b[x1][q1]){
		ans[i]=18874;
		return;
	}
	b[x1][q1]=1;
	v1+=v*(abs(a[x1][q1][1]-x1));
	if(x1==a[x1][q1][1]&&q1==a[x1][q1][2]){
			ans[i]=v1;
		return;
	}
	else
		room(a[x1][q1][1],a[x1][q1][2],v1,i);
	return;
}
int main()
{
	int i,j,num=0;
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	cin>>n>>m>>v>>x>>y;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>a[i][j][1]>>a[i][j][2];
			if(a[i][j][1]==x&&a[i][j][2]==y)
				num++;
		}
	}
	if(num==1||num==0){
		cout<<"impossible";
		return 0;
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++)
			memset(b[j],0,sizeof(b[j]));
		room(1,i,0,i);
	}
	sort(ans+1,ans+m+1);
	cout<<ans[1];
	return 0;
}
