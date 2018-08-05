#include<bits/stdc++.h>
using namespace std;
int a[50010];
int main(){
	int n,i,j,s=1,head=2,sum=0;
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	while(s<=n-1){
		a[head]=a[head]+a[head-1];
		sum=sum+a[head];
		head++;
		s++;
		for(i=head-1;i<=n-1;i++)
			if(a[i]>a[i+1])
				swap(a[i],a[i+1]);
			else break;
	}
	cout<<sum;
	return 0;
}
