#include <bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>,greater<int> >s;
int n,x,ans,temp;
int main(){
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&x),s.push(x);
	while(n>1) temp=s.top(),
		s.pop(),temp+=s.top(),
		s.pop(),s.push(temp),
		ans+=temp,n--;
	cout<<ans;
	return 0;
}
