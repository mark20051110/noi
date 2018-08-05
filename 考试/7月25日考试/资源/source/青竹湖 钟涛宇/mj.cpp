#include <bits/stdc++.h>
using namespace std;
int n,i,j,l[50001],c=0,s=0;
int main()
{
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>l[i];
		c+=l[i];
	}
	for(i=1;i<=n;i++)
		for(j=1;j<=i;j++)
			if(l[i]>l[j])
				swap(l[i],l[j]);
	for(i=1;i<n;i++)
	{
		s+=c;
		c-=l[i];
	}
	cout<<s;
	return 0;
}
