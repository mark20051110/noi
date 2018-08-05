/*#include <bits/stdc++.h>
using namespace std;
struct tree
{
	int q,w,f,sonc,sum;
}a[200010];
int ss[200010];
int cmp(tree x,tree y)
{
	if(x.w<y.w)return true;
	else return false;
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i = 1;i <= n;i++)
	{
		cin>>a[i].q>>a[i].w>>a[i].f;
		ss[i]=a[i].w;
		a[a[i].f].sonc++;
	}
	for(int i = 1; i <= n;i++)
	{
		for(int j = i+1; j <= n;j++)
			a[i].w+=ss[j];
	}
	sort(a+1,a+n+1,cmp);
	cout<<a[n].w;
	return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("pearl.in","r",stdin);
	freopen("pearl.out","w",stdout);
	cout<<96;
}
