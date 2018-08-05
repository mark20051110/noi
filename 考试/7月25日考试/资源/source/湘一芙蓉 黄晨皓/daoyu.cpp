#include<bits/stdc++.h>
using namespace std;
int que[5000001],h[5000001];
bool w[5000001];
int main()
{
	int n,q;
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	cin>>n>>q;
	int i,j;
	for(i=1;i<=n;i++)
		cin>>h[i];
	for(i=1;i<=q;i++)
		cin>>que[i];
	for(i=1;i<=q;i++){
		int dao=0;
		memset(w,1,sizeof(w));
		for(j=1;j<=n;j++){
			int x=1,y=n;
			if(h[j]>que[i])
				w[j]=0;
		}
		int d=0;
		for(j=1;j<=n+1;j++){
			if(w[j]==false)
				d=1;
			else{
				if(d==1)
					dao++,d=0;
				while(w[j]==true){
					j++;if(j>n+1)
						break;
				}
					
				j--;
			}
		}
		cout<<dao;
		if(i<q)
			cout<<endl;
	}
	return 0;
}
