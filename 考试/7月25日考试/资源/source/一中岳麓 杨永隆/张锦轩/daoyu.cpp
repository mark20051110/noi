#include <bits/stdc++.h>
using namespace std;
int n,q,h,ans;
struct dao
{
	int hai;
	bool yan=0;
}a[50005];
bool d=0;
int main()
{
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	int i,j;
	cin>>n>>q;
	for(i=1;i<=n;i++)
	  cin>>a[i].hai;
	a[0].yan=1;a[n+1].yan=1;
	while(q--)
	{
		ans=0;
		for(i=1;i<=n;i++)
		  a[i].yan=0;
		cin>>h;
		for(i=1;i<=n;i++)
		  if(h>=a[i].hai)
		  {
		  	  a[i].yan=1;
		  	  d=1;
		  }
		for(i=1;i<=n;i++)
		  if(a[i-1].yan==1&&a[i].yan==0)ans++;
		if(d==0){cout<<"1"<<endl;continue;}
		cout<<ans<<endl;
	}
	return 0;
}
