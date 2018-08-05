#include<bits/stdc++.h>
using namespace std;
int n,m,k,l;
long long s;
int main(){
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	cin>>n>>m;
	--n; --m;
	if(n==m&&n%2==0){
		cout<<n/2;
		return 0;
	}
	if(n/m==2){
		cout<<m;
	    return 0;
	}
	if(m/n==2){
		cout<<n;
	    return 0;
	}
	k=n/2; l=m/2;
	if(n%2==1)++k;
	if(m%2==1)++l;
	cout<<max(k,l);
	return 0;
}
