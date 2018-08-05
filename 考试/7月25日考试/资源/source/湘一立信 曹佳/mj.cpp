#include<bits/stdc++.h>
using namespace std;
int l1[50005],z[50001];
int main(){
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	int j,i,n,top=0,Max=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>l1[i];
	}
	sort(l1+1,l1+n+1);
	for(i=1;i<=n-1;i++){
		l1[i+1]=l1[i]+l1[i+1];
		Max=Max+l1[i+1];
		for(j=i+1+1;j<=n;j++){
			if(l1[i+1]>l1[j])swap(l1[i+1],l1[j]);
			else break;
		}
	}
	cout<<Max;
	return 0;
}
