#include<bits/stdc++.h>
using namespace std;
int a[50010];
int main()
{
    freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	int n,i,k;
	long long maxx=0;
	cin>>n;
	k=n;
	for(i=1;i<=n;i++)
	    cin>>a[i];
	sort(a+1,a+n+1);
	for(i=1;i<=n;i++)
	{
	    maxx+=k*a[i];
	    k--;
	}
    maxx-=a[1];
    cout<<maxx;
    return 0;
}
