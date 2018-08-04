#include <bits/stdc++.h>
using namespace std;
int  main()
{
	int f1=1,f2=1,f3;
	int n;
	scanf("%d", &n);
	for (int i = 3 ; i <= n ; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	printf("%d\n", f3);
	return 0;
}
