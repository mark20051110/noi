#include<bits/stdc++.h> 
using namespace std;
int a[10][10];
int main()
{	
	freopen("black.in","r",stdin);
	freopen("black.out","w",stdout);
	int x1,x2,y1,y2,ans=0;
	cin>>x1>>y1>>x2>>y2;
	for(int i=x1+1;i<=y2;i++)
		for(int j=y1+1;j<=x2;j++)
			if((j>=i && j%2==0) || (i>=j && i%2==0))
				ans++;	
	cout<<ans;
	return 0;
} 
