#include <bits/stdc++.h>
using namespace std;
int a[500010];
int b[500010];
int c[1000010];
int main()
{
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++)
		cin>>a[i];
	for(int i = 1;i <= n;i++)	
		cin>>b[i];
	int t=0;
	for(int i = 1;i <= n;i++)
		for(int j = 1;j <= n;j++)
		{
			c[++t]=a[i]+b[j];
		}
	sort(c+1,c+t+1);
	for(int i =1 ;i <= n;i++)
		cout<<c[i]<<" ";
	return 0;
}
