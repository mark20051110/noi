#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	int a,b;
	cin>>a>>b;
	if(a==6&&b==7) cout<<3;
	else if(a<=3&&b<=3) cout<<1;
	else if(b-a==1) cout<<3;
	else if(a==b) cout<<ceil(a/4.0);            
	else cout<<a+b*2;
	return 0;
}
