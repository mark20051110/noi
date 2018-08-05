#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long f1=1,f2=2,f3;
	int n;
	cin>>n;
	if(n<=2)
	{
		cout<<1;
		return 0;
	}
	for(int i = 3 ; i <= n ; i++)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	cout<<f3;
	return 0;
}
