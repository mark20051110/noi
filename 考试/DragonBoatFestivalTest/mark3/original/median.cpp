#include<bits/stdc++.h>
using namespace std;
double a[1000010];
int main()
{
	freopen("median.in","r",stdin);
	freopen("median.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)	
		cin>>a[i];
	printf("%.1lf ",a[1]);
	for(int i=2;i<=n;i++)
	{
		sort(a+1,a+i+1);
		if(i%2==0)
			printf("%.1lf ",(a[i/2]+a[(i/2)+1])/2);	
		else
			printf("%.1lf ",a[i/2+1]);
	}
 	return 0;
}
