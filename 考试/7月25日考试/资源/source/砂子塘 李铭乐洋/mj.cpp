#include<bits/stdc++.h>
using namespace std;
const int MAX=50055;
int a[MAX];
int main()
{
	int n,ans,s;ans=0;s=0;
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	   scanf("%d",&a[i]);s+=a[i];
    }
	sort(a+1,a+1+n);
	for(int i=n;i>1;i--)
	{
		ans+=s;s-=a[i];
	}printf("%d",ans);
	return 0;
}
