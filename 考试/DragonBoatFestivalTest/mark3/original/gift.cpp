#include<bits/stdc++.h>
using namespace std;
int a[6000];
bool b[6000];

int n,m,k,ans=0,num,sum=0;
void search(int ii)
{
	for(int i=ii;i<=n;i++)
	{
		if(num>0 && sum+a[i]<=k && b[i]==true)
		{
			sum+=a[i];
			num--;
			b[i]=false;
			if(sum==k && num==0)
			{
				ans++;
				ans%=19260817;	
			}
			else search(ii+1);
			sum-=a[i];
			num++;
			b[i]=true;
		} 
	}
	return;
}
int main()
{
	freopen("gift.in","r",stdin);
	freopen("gift.out","w",stdout);
	cin>>n>>m>>k;
	memset(b,true,sizeof(b));
	num=m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	search(1);
	cout<<ans;
	return 0;
 } 
