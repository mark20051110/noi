#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("game.in","r",stdin);
	freopen("game.out","w",stdout);
	long long n,f1=1,f2=1,f3,mod=1000000007;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		f3=(f1%mod+f2%mod)%mod;
		f1=f2%mod;f2=f3%mod;
	}
	cout<<f3;
	return 0;
}
