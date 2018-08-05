#include<bits/stdc++.h>
using namespace std;
int a[50010];
int main()
{
	int n,i,sum=0,z=0,j,summ;
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 cin>>a[i],sum+=a[i];
	summ=sum;
	sort(a+1,a+n+1);
	j=n;
	while(z<n-2)
	{
		summ-=a[j];
		sum+=summ;
		j--;z++;
	}printf("%d",sum);
	return 0;
}
