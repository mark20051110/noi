#include <bits/stdc++.h>
using namespace std;
int a[1001][101],b[1001][101];
int l[10001][3];
int main()
{
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	int n,m,v,x,y;
	int i,j,ls,o,k,g;
	long long mex,mexs=100001;
	scanf("%d%d%d%d%d",&n,&m,&v,&x,&y);
	for(i=1;i<=n;i++)
    	for(j=1;j<=m;j++)
    	{
    		scanf("%d%d",&a[i][j],&b[i][j]);
    		if(a[i][j]==i&&b[i][j]==j)
    		a[i][j]=0;
	    }
	for(k=1;k<=m;k++)
	{
		i=1;
		j=k;
		ls=0;
		mex=0;
		while(i<=n+1)
		{
		if(i==x&&j==y)
			break;
			ls++;
			l[ls][1]=i;
			l[ls][2]=j;
			if(a[i][j]==0)		
			{
				mex=100001;
				while(ls>=1)
				{
					a[l[ls][1]][l[ls][2]]=0;
					ls--;
	            }
				break;
			}
				
			
			if(a[i][j]>=i)
			{
				mex=mex+a[i][j]-i;
			}
			if(a[i][j]<i)
			{
			mex=mex+i-a[i][j];
			}
			g=i;
			i=a[i][j];
			j=b[g][j];
			for(o=1;o<=ls;o++)
			{
				if(i==l[o][1]&&j==l[o][2])
				{
					a[i][j]=0;
					while(ls>=1)
				    {
					    a[l[ls][1]][l[ls][2]]=0;
					    ls--;
	                }
	                mex=100001;
	                break;
				}	
			}
			if(mex==100001)
				break;
		}
		if(mex<mexs)
		mexs=mex;
	}
	if(mexs==100001)
	    printf("impossible");
	    else
	printf("%lld",mexs*v);
	return 0;
}
