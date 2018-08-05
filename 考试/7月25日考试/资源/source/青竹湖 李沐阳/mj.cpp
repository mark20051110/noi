#include <bits/stdc++.h>
using namespace std;
int a[50010];
int main(){
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);	
	int i,n,s=0,t,x;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	t=a[1];
	for(i=2;i<=n;i++){
		t+=a[i];
		s+=t;
	}
	cout<<s;
	return 0;
}
