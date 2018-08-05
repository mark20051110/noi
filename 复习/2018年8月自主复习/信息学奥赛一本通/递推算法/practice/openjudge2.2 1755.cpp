#include <bits/stdc++.h>
using namespace std;
int  main()
{
	int f1 = 1,f2 = 1,f3;
	int n;
	scanf("%d", &n);
	while(n)
	{
		n--;
		int t;
		scanf("%d", &t);
		if(t <= 2)
		{
			printf("1\n");
			continue;
		}
		for (int i = 3 ; i <= t ; i++)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
		printf("%d\n", f3);
		f1 = 1;f2 = 1;
	}
	return 0;
}
