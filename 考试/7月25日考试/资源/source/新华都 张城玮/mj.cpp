#include<bits/stdc++.h>
using namespace std;
int n,a[50001];
long long s=0,t=0;
int main(){
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
	    cin>>a[i];
	    t+=a[i];
	}
	sort(a+1,a+n+1);
	for(int i=n;i>=2;i--){
		s+=t; t-=a[i];
	}
	cout<<s;
	return 0;
}
