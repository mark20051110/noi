#include<bits/stdc++.h>
using namespace std;
int gd[50005],cx[50005];
int main(){
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	int n,q,i,j,k;
	scanf("%d%d",&n,&q);
	for(i=1;i<=n;i++)
		cin>>gd[i];
	for(i=1;i<=q;i++)
		cin>>cx[i];
	for(i=1;i<=q;i++){
		k=1;
		for(j=1;j<=n-1;j++)
			if(cx[i]>=gd[j]&&gd[j-1]>cx[i])k++;
		if(cx[i]>=gd[n]&&gd[n-1]<=cx[i])k--;
		cout<<k<<" ";
	}
}
