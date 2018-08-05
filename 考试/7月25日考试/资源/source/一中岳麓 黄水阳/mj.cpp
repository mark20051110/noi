#include <bits/stdc++.h>
using namespace std;
int a[50001],i,n,cur;
long long ans,inf;
int main(){
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		inf+=a[i];
	}
	sort(a+1,a+n+1);
	cur=n;
	while(cur>=2){
		ans+=inf;
		inf-=a[cur];
		cur--;
	}
	cout<<ans;
}
