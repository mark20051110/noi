#include <bits/stdc++.h>
using namespace std;
int n,m,ex,ey,v,ans=0,minn=0x7ffffff,xx,yy,x2,y2;
struct node
{
	int x,y;
	int c;
}a[1000][100];
bool f[1000][100];
bool d=0;
int main()
{
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
    int i,j;
	cin>>n>>m>>v>>ex>>ey;
	for(i=1;i<=n;i++)
	  for(j=1;j<=m;j++)
	  {
	  	  cin>>a[i][j].x>>a[i][j].y;
	  	  a[i][j].c=n;
	  }
	for(i=1;i<=m;i++)
	{
		xx=1;yy=i;
		ans=0;d=0;
    	memset(f,0,sizeof(f));
		while(true)
		{
			x2=xx;y2=yy;
			xx=a[x2][y2].x;
			yy=a[x2][y2].y;
			if(f[xx][yy]==1)break;
			ans+=v*abs(xx-x2);
			f[xx][yy]=1;
			if(xx==ex&&yy==ey)
			{
				d=1;
				break;
			}
		}
		if(d==1&&ans<minn)
		  minn=ans;
    }
	if(minn==0x7ffffff)cout<<"impossiple"<<endl;
	else cout<<minn<<endl;
	return 0;
}
