#include <bits/stdc++.h>
using namespace std;
int d[50001],x[50001],s[50001],n,q,i,j,xw;//d[1000000001];
stack<int> dy;
int main()
{
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	cin>>n>>q;
	for(i=1;i<=n;i++)
		cin>>d[i];
	for(i=1;i<=q;i++)
	{
		cin>>xw;
		for(j=1;j<=n;j++)
			if(d[j]>xw)
				dy.push(d[j]);
			else
			{
				if(!dy.empty())
					s[i]++;
				while(!dy.empty())
					dy.pop();
			}
		if(!dy.empty())
			s[i]++;
		while(!dy.empty())
			dy.pop();
	}
	for(i=1;i<=q;i++)
		cout<<s[i]<<endl;
	return 0;
}
