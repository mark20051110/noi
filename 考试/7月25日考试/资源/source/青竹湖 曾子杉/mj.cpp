#include<bits/stdc++.h>
using namespace std;
priority_queue<int> q;
int n,ans;
int main(){
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	int i,j,k,a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		q.push(-a);
	}
	for(i=1;i<=n-1;i++){
		a=abs(q.top());
		q.pop();
		b=abs(q.top());
		q.pop();
		ans+=a+b;
		q.push(-(a+b));
	}
	cout<<ans<<endl;
	return 0;
}

