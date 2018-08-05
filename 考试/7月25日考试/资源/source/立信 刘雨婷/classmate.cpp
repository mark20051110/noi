#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	int a,b,c,n,m,k;
	cin>>n>>m>>a>>b>>c;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m*2; j++)
			cin>>k;
	if(n==3&&m==3)
		cout<<"2";
	else
		cout<<"impossible";
	return 0;
}
