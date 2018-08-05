#include<bits/stdc++.h>
using namespace std;
int n,m,a[50001]= {0},l,b[50001]= {0},ans=0,sum=1,num=0;
int into(int x) {
	ans=0;
	sum=1;
	for(int i=1; i<=n; i++)
		if(a[i]<=x) {
			b[i]=1;
			l=i;
		}
	for(int i=1; i<=n; i++) {
		if(b[i]==1&&i!=1) {
			if(b[i-1]!=1)
				ans++;
			sum=0;
			num=i;
		}
	}
	return ans;
}
int main() {
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++)
		scanf("%d",&a[i]);
	for(int i=1; i<=m; i++) {
		int k;
		scanf("%d",&k);
		memset(b,0,sizeof(b));
		into(k);
		if(sum==1)
			cout<<"1"<<endl;
		else if(ans==0&&b[l-1]==1&&b[l+1]==0&&b[l]==1&&l!=n)
			cout<<ans+1<<endl;
		else if(ans==1&&b[num-1]!=1&&b[num+1]!=1)
			cout<<ans+1<<endl;
		else if(b[n]!=1&&b[n-1]==1)
			cout<<ans+1<<endl;
		else
			cout<<ans<<endl;
	}
	return 0;
}
