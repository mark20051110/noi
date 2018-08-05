#include<bits/stdc++.h>
using namespace std;
const int MAX=50002;
int a[MAX],b[MAX];
int main()
{
	int n,m,q,ans;
	bool c;
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
    scanf("%d%d",&n,&q);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    for(int i=1;i<=q;i++)scanf("%d",&b[i]);
    for(int i=1;i<=q;i++)
    {
    	ans=0;m=0;
		for(int j=1;j<=n;j++)
		{   c=0;
			if(a[j]<=b[i])c=1;
			if(c!=1&&m==0)
			{
				m=1;ans++;
			}
			if(m==1&&c==1&&j<n&&a[j+1]>b[i])ans++;
		}if(a[1]>b[i]&&ans==0)ans++;
		printf("%d\n",ans);
	}
	return 0;
}
