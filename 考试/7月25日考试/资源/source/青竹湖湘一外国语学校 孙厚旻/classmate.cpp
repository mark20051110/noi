#include<bits/stdc++.h>
using namespace std;
int bcj[100005],v[100005];
int ans=0x3f3f3f,p,n;
void merge(int x,int y)
{
	bcj[x]=y;
}
int I_love_u(int x)
{
	if (bcj[x]==x)return x;
	else {if (bcj[x]/n>x/n||bcj[x]/n<x/n)p+=abs(bcj[x]/n-x/n);
	if (v[x]==1)return 0;
	else v[x]=1;
	return I_love_u(bcj[x]);}
}
int main()
{
	int i,j,x,y,m,k;
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout); 
	cin>>n>>m>>k>>x>>y;
	for (i=1;i<=n*m;i++)bcj[i]=i;
	for (i=1;i<=n;i++)
	  for (j=1;j<=m;j++)
	  	{
		  int o,u;
		  cin>>u>>o;
		  merge(bcj[(i-1)*m+j],((u-1)*m+o));
	    }
	    int t=0;
	for (i=1;i<=m;i++)
	{
		p=0;memset(v,0,sizeof(v));
		int b=I_love_u(i);
		if (b==0)continue;
		if (p*k<ans){t=1;ans=p*k;}
	}
	if (t==0)cout<<"impossible";
	else 
	cout<<ans;
	return 0;
}
