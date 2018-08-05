#include<bits/stdc++.h>
using namespace std;
int a[50010];
int main(){
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	int i,n,s=0,ans=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		s+=a[i];
	}
	sort(a+1,a+n+1);
	for(i=n;i>=2;i--)
		ans+=s-a[i+1];
	cout<<ans;
	return 0;
}
