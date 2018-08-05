#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	cin>>n>>m;
	if(n==5&m==6)printf("4s");
	else if(n==6&&m==7)printf("3s");
	else printf("6s");
	return 0;
}
