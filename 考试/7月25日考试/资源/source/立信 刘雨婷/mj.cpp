#include<bits/stdc++.h>
using namespace std;
int n,a,num=0,ans=0,sum;
stack<int> p;
int main() {
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	cin>>n;
	sum=n-1;
	for(int i=1; i<=n; i++) {
		cin>>a;
		p.push(a);
		num+=a;
	}
	ans+=num;
	while(sum>1) {
		ans+=num-p.top();
		sum--;
		num-=p.top();
		p.pop();
	}
	cout<<ans;
	return 0;
}
