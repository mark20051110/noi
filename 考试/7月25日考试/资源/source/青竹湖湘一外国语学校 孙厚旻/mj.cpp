#include<bits/stdc++.h>
using namespace std;
int a[50010];
bool cmp(int a,int b)
{
	if (a>b)return 1;
	else return 0;
}
void heap(int x)
{
	if (x>1)
	if (a[x]>a[x/2]){swap(a[x],a[x/2]);heap(x/2);}
}
int main()
{
	int i,j,x,y,n,k,ans=0;
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	cin>>n;
	for (i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	k=n;
	for (i=1;i<=n-1;i++)
	{
		a[k-1]+=a[k];
		a[k]=0;k--;
		ans=ans+a[k];
		heap(k);
	}
	cout<<ans;
	return 0;
}
