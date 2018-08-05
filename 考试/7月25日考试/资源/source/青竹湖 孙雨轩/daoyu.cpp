#include<bits/stdc++.h>
using namespace std;
int a[500010];
int main(){
	int n,i,q,s,j,x;
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	cin>>n>>q;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=q;i++){
		cin>>x;
		s=0;
		for(j=1;j<=n;j++){
			if(a[j]>x&&(a[j+1]<=x||j+1>n))
				s++;
		}
		cout<<s<<endl;
	}
	return 0;
}
