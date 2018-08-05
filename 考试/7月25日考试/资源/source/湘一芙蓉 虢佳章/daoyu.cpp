#include<bits/stdc++.h>
using namespace std;
long long a[50005],c[50005],s,m[50005];
int main()
{
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	int n,q,i,j;
	int b,t;// «∑Ò”–µ∫£ª 
	scanf("%d%d",&n,&q);
	for(i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	a[0]=0;
	a[n+1]=0;
	for(i=1;i<=q;i++)
	{
		scanf("%lld",&s);
		m[i]=0;
		for(j=1;j<=n;j++)
		{
			c[j]=a[j]-s;
			if(c[j]>0&&c[j-1]<=0)
				m[i]++;
		}	
	}
	for(i=1;i<=q;i++)
	{
		printf("%d",m[i]);
		if(i<q)
		cout<<endl;
	}
}
