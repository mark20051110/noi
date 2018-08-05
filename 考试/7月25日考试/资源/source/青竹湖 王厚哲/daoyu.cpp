#include <bits/stdc++.h>
using namespace std;
bool under[50001];
int high[50001];
int n,q,i,j,k,Seahigh;
int main(){
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	cin>>n>>q;
	for(i=1;i<=n;i++) cin>>high[i];
	for(k=1;k<=q;k++){
		int s=0;
		memset(under,true,sizeof(under));
		cin>>Seahigh;
		under[n+1]=false;
		for(i=1;i<=n;i++)
			if(high[i]<=Seahigh)
				under[i]=false;
		for(i=2;i<=n+1;i++)
			if(under[i]==false&&under[i-1]==true)
				s++;
		cout<<s<<endl;
	}
	return 0;
}
