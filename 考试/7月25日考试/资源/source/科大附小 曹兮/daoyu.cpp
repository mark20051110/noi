#include<bits/stdc++.h>
using namespace std;
int a[50010],n;
bool b[50010]={1,0};
bool fl(int h,int dh,int i)
{
	if(dh>h) return 0;
	else if(b[i-1]) return 0;
	else{
		b[i]=1;
		return 1;
	}
}
int main()
{
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	int q,i,j;
	cin>>n;
	b[n-1]=1;
	for(i=1;i<=n+1;i++){
/*		int x;
		cin>>x;
		a[x]++;*/
		cin>>a[i];
	}
	for(i=1;i<q;i++){
		int x;
		cin>>x;
/*		if(a[x]==0) cout<<0<<endl;
		else cout<<n-a[x]<<endl;*/
		int sum=0;
		for(j=1;j<=n;j++)
			if(fl(x,a[j],j))
				sum++;
		cout<<sum<<endl;
	}
	return 0;
}
