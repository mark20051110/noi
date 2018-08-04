#include <bits/stdc++.h>
using namespace std;
int  main()
{
	long long f1=1,f2=1,f3;
	int n;
	cin>>n;
	if(n==0)
	{
		cout<<1;
		return 0;
	} 
	if(n==1) 
	{
		cout<<1;
		return 0;
	}
	for (int i = 2 ; i <= n ; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	printf("%d\n", f3);
	return 0;
}
