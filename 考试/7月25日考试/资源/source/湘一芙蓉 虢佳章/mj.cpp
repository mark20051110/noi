#include<bits/stdc++.h>
using namespace std;
int a[50005];
int main()
{
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	int n;
	int i,j;
	long long m=0,ms=0;
	scanf("%d",&n);
	for(i=1; i<=n ;i++)
		scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	for(i=1;i<=n;i++)
	{
		m+=a[i];
		ms+=m;
	}
	ms-=a[1];
	if(m*n/2<ms)
	ms=m*n/2;
	printf("%lld",ms);
	return 0;
}
