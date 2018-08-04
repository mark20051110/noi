#include<bits/stdc++.h>
using namespace std;
int a[100010];
int main()
{
	freopen("ball.in","r",stdin);
	freopen("ball.out","w",stdout);
	int n;
	long long sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			sum+=abs((a[i]-a[j])*(i-j));
	cout<<sum;
	return 0;
}
