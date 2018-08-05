#include<bits/stdc++.h>
#define For(i,l,r) for(int i=(l);i<=(r);i++)
using namespace std;
int randx(int l,int r){
	return l+rand()%(r-l+1);
} 
int main(){
	freopen("sum9.in","w",stdout);
	int n=randx(450000,500000);
	cout<<n<<endl;
	For(i,1,n)
		cout<<randx(-100000,100000)<<" ";
	cout<<endl;
	For(i,1,n)
		cout<<randx(-100000,100000)<<" ";
	return 0;
} 
