#include<bits/stdc++.h>
using namespace std;
int n,q,s=0,t=0,a[50001],b[50001];
int main(){
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	    cin>>a[i];
	while(q>0){
		cin>>b[q];
		for(int i=1;i<=n;i++)
			if(a[i]-b[q]>0){
				if(s==0){++t;s=1;}
			}
			else s=0;
		cout<<t<<endl;
		s=0; t=0; --q;
	}
	return 0;
}
