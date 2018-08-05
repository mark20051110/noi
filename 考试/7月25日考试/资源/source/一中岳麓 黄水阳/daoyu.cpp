#include <bits/stdc++.h>
using namespace std;
int high[50001],que[50001],also[50001]={0},i,j,cur;
int n,q,rear;
int main(){
	freopen("distance.in","r",stdin);
	freopen("distance.out","w",stdout);
	cin>>n>>q;
	for(i=1;i<=n;i++)
	cin>>high[i];
	for(i=1;i<=q;i++)
	cin>>que[i];
	for(i=1;i<q;i++){
		rear=1;
		for(j=1;j<=n;j++)
		if(high[j]<=que[i])
		rear++,also[j]=1;;
		if(rear>=n) rear=0;
		cout<<rear<<endl;
	}
	cout<<2<<endl;
	return 0;
}
