#include<bits/stdc++.h>
using namespace std;
int a[50010];
int main()
{
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	int n,i,j,sum=0;
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	for(i=n;i>1;i--)
		for(j=1;j<=i;j++)
			sum+=a[j];
	cout<<sum;
	return 0;
}
