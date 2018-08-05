#include<bits/stdc++.h>
using namespace std;
int a[1005][205],b[1005][205]={0},n,m,x,y;
long ans=0,tot=1000000,v;
void dfs(int zuo,int you)
{

	if(b[zuo][you]==1)
	    return;
	if(zuo>n||you>m)
	    return;
	b[zuo][you]=1;
	int c=zuo,d=you*2;
	if(a[c][d-1]==x&&a[c][d]==y)
	{
		ans+=abs(a[c][d-1]-zuo)*v;
	    tot=min(tot,ans);
	    return;
	}
	else
	{
		ans+=abs(a[c][d-1]-zuo)*v;
		dfs(a[c][d-1],a[c][d]);
	}
}
int main()
{
	
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	int left,right,i,j,k;
	cin>>n>>m>>v>>x>>y;
    for(i=1;i<=n;i++)	
	    for(j=1;j<=2*m;j++)
	    {
		    b[i][j]=0;
	        cin>>a[i][j];
		}
	for(i=1;i<=m;i++)
	{
        dfs(1,i);
        ans=0;
		for(j=1;j<=n;j++)
            for(k=1;k<=m*2;k++)
                b[j][k]=0;
    }	
    if(tot!=1000000)
        cout<<tot;
    else
        cout<<"impossible";
	return 0;
}
