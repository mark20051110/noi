#include <bits/stdc++.h>
using namespace std;
int a[500010][4];
struct curry 
{
	int step,place;
}o,k;
queue <curry> q;
bool vis[500010];
int main()
{
	int n,c;
	cin>>n>>c;
	for(int i = 1; i <= n;i++)
	{
		int l,r;
		cin>>l>>r;
		a[i][1]=l;
		a[i][2]=r;
		a[l][3]=i;//father 
		a[r][3]=i;
	}
	o.step=0;
	o.place=c;
	q.push(o);
	int maxx=-1,y;
	while(!q.empty())
	{
		
		for(int i = 1; i <= 3;i++)
		{
			k = q.front();
			if(vis[a[k.place][i]]==0 && a[k.place][i]!=0)
			{
				vis[a[k.place][i]]=1;
				k.step++;k.place=a[k.place][i];
				q.push(k);
				if (k.step>maxx){maxx=k.step;y=k.place;}
				if (k.step==maxx){if (y>k.place)y=k.place; }
			}
		}
		q.pop();
	}
	cout<<y;
	return 0;
}
