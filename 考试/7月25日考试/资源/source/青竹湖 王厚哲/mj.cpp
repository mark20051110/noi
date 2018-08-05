#include <bits/stdc++.h>
using namespace std;
int a[50001];
int n,i,j,s=0;
int main(){
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=1;i<=n-1;i++){
		sort(a+1,a+n+1);
		a[i+1]+=a[i];
		s+=a[i+1]
	}
	cout<<s;
	return 0;
}
