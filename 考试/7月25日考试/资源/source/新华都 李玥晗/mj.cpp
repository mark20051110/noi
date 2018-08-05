#include<bits/stdc++.h>
using namespace std;
int a[50002];
long long ans=0;
int n,i,j,k;
int main(){
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)
	  cin>>a[i];
	sort(a+1,a+n+1);
	for(i=1;i<n-1;i++){
		a[i+1]=a[i]+a[i+1];
		ans+=a[i+1];int f=1;
		int l=a[i+1];
		for(j=i+2;j<=n;j++)
		  if(a[j]>=l){
		  for(k=j-1;k>i+1;k--)
		    a[k-1]=a[k];
		  a[j-1]=l;f=2;break;}
		if(f!=2){
			for(k=n;k>i+1;k--)
		    a[k-1]=a[k];
		    a[n]=l;
		}
	}
	a[n]+=a[n-1];
	ans+=a[n];
	cout<<ans;
	return 0;
}
