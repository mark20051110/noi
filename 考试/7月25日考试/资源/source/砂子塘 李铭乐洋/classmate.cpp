#include<bits/stdc++.h>
using namespace std;
struct AC
{
	int c,h,data;
}a[1055][155];
int main()
{
	int n,m,v,x,y,i2,j2;
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	scanf("%d%d%d%d%d",&n,&m,&v,&x,&y);
	for(int i=1;i<=n;i++)
	  for(int j=1;j<=m*2;j++) 
	    scanf("%d",&a[i][j].data);
	int k=0;bool ok=0;int i=1;int j=1;
	while(1)
	{                
		a[i][j].c=a[i][j*2-1].data;
		a[i][j].h=a[i][j*2].data;
		i2=a[i][j].c;j2=a[i][j].h;
		if(i!=i2)k+=v;i=i2;j=j2;
		if(k>20||(i==x&&j==y))break;
	}
	if(k>20) cout<<"impossible";
	else printf("%d",k);
	return 0;
}
