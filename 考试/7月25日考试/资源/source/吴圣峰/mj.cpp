#include<bits/stdc++.h>
using namespace std;
int n,l[1001],s,ans;
int main(){
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>l[i];
	if(n==2){
		cout<<l[1]+l[2];
		return 0;
	}
	else {
		for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++)
		if(l[i]>l[j]){
			s=l[i];l[i]=l[j];l[j]=s;
		}
		if(n==3){
			cout<<l[3]+2*(l[1]+l[2]);
			return 0;
		}
		else for(int i=1;i<=n;i++)
		ans+=l[i];
		cout<<2*ans-l[n];
	}
	return 0;
}
