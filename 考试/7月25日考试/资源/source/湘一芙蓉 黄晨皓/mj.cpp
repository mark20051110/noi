#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100000],n,sum=0;
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i],sum+=a[i];
	if(n%2==0)
		cout<<sum*2;
	else
		cout<<sum*2-a[n];
	return 0;
}
