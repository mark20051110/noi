#include<bits/stdc++.h>
using namespace std;
struct
{
	int x;
	int y;
}a[1005][105];
bool vis[1005][105],tem;
int n,m,v,xx,yy,minn=0x3f3f3f3f3f;
void search(int xxx,int yyy,int temp,int sum)
{
	if(xxx==xx&&yyy==yy)
    {
    	if(sum<minn)
    	  minn=sum;
    	tem=true;
    	return ;
	}
	if(vis[xxx][yyy]==true)
	  return ;
	vis[xxx][yyy]=true;
	sum+=abs(a[xxx][yyy].x-temp)*v;
	search(a[xxx][yyy].x,a[xxx][yyy].y,a[xxx][yyy].x,sum);
}
int main ()
{
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	scanf("%d%d%d%d%d",&n,&m,&v,&xx,&yy);
	for(int i=1;i<=n;i++)
	  for(int j=1;j<=m;j++)
	    scanf("%d%d",&a[i][j].x,&a[i][j].y);
	for(int i=1;i<=m;i++)
	{
		memset(vis,0,sizeof(vis));
		search(a[1][i].x,a[1][i].y,1,0);
	}
	if(tem==true)
	  printf("%d",minn);
	else
	  printf("impossible");
	return 0;
}
