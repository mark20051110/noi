#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("eat.in","r",stdin);
	freopen("eat.out","w",stdout); 
	long long a,b;
	cin>>a>>b;
	if(b==1)
		cout<<1;
	if(a>b)
		cout<<1+(b-1)*2;
	else 
		cout<<2*(a-1);
	return 0;	
} 
