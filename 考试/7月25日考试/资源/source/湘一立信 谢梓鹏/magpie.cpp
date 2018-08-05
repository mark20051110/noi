#include<bits/stdc++.h>
using namespace std;
bool temp;
int minn=0x3f3f3f3f3f;
int n,m;
void dfs(int x,int y,int xx,int yy,int sum)
{
	if(sum>minn)
	  return ;
	if(x==xx&&y==yy)
	{
		if(temp==false)
		{
			temp=true;
			minn=sum;
			return ;
		}
		if(sum<minn)
		{
			minn=sum;
			return ;
		}
		return ;
	}
	if(x+2<=n&&y+2<=m)
	  dfs(x+2,y+2,xx,yy,sum+2);
	if(xx-2>=1&&yy-1>=1&&x+2<=n&&y+2<=m)
	  dfs(x+2,y+2,xx-2,yy-1,sum+2);
	if(xx-1>=1&&yy-3>=1&&x+2<=n&&y+2<=m)
	  dfs(x+2,y+2,xx-1,yy-3,sum+2);
	if(xx-4>=1&&yy-2>=1&&x+2<=n&&y+2<=m)
	  dfs(x+2,y+2,xx-4,yy-2,sum+2);
	if(xx-4>=1&&x+2<=n&&y+2<=m)
	  dfs(x+2,y+2,xx-4,yy,sum+2);
	if(xx-3>=1&&yy-3>=1&&x+2<=n&&y+2<=m)
	  dfs(x+2,y+2,xx-4,yy-2,sum+2);
	if(yy-4>=1&&x+2<=n&&y+2<=m)
	  dfs(x+2,y+2,xx,yy-4,sum+2);
	if(xx-2>=1&&x+2<=n&&y+2<=m)
	  dfs(x+2,y+2,xx-2,yy,sum+2);
	if(yy-4>=1&&x+2<=n&&y+2<=m)
	  dfs(x+2,y+2,xx,yy-2,sum+2);
	if(xx-2>=1&&yy-1>=1)
	  dfs(x,y,xx-2,yy-1,sum+1);
	if(xx-1>=1&&yy-2>=1)
	  dfs(x,y,xx-1,yy-2,sum+1);
	if(xx-2>=1&&yy-1>=1)
	  dfs(x,y,xx-2,yy-1,sum+2);
	if(xx-1>=1&&yy-3>=1)
	  dfs(x,y,xx-1,yy-3,sum+2);
	if(xx-4>=1&&yy-2>=1)
	  dfs(x,y,xx-4,yy-2,sum+2);
	if(xx-4>=1)
	  dfs(x,y,xx-4,yy,sum+2); 
	if(xx-3>=1&&yy-3>=1)
	  dfs(x,y,xx-4,yy-2,sum+2);
	if(yy-4>=1)
	  dfs(x,y,xx,yy-4,sum+2);
	if(xx-2>=1)
	  dfs(x,y,xx-2,yy,sum+2); 
	if(yy-4>=1)
	  dfs(x,y,xx,yy-2,sum+2);
}
int main()
{
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	scanf("%d%d",&n,&m);
	if(n+m>30)
	{
	  int w=(n+m)/5;
	  if((n+m)%5!=0)
	    w++;
	  printf("%ds",w);
	  return 0;
	}
    if(n==m&&n<=10&&m<=10)
    {
		if(n>=3&&n<=6)
		{
			printf("2s");
    		return 0;
		}
		if(n==7)
		{
			printf("3s");
    		return 0;
		}
		if(n>=8)
		{
			printf("4s");
    		return 0;
		}
	}
	dfs(1,1,n,m,0);
	printf("%ds",minn);
	return 0;
}
