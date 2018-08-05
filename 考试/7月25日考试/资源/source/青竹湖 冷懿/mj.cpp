#include<bits/stdc++.h>
using namespace std;
priority_queue<int>q;
int main(){
	int i,n,x,t,a=0;
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		q.push(-x);
	}
	for(i=2;i<=n;i++){
		t=q.top();
		a-=q.top();
		q.pop();
		t+=q.top();
		a-=q.top();
		q.pop();
		q.push(t);
	}
	printf("%d",a);
}
