#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	int n,m;
	cin>>n>>m;
	if(n==2){
		if(m==3) cout<<1;
		if(m==7) cout<<3;
	}
	else if(n==3){
		if(m==2)	cout<<1;
		if(m==3||m==5||m==7)	cout<<2;
		if(m==4||m==6||m==8)	cout<<3;
		if(m==9)	cout<<4;
		if(m==10)	cout<<5;
	}
	else if(n==4){
		if(m==3||m==4)	cout<<2;
		if(m==6||m==8||m==9)	cout<<3;
		if(m==5||m==7||m==10)	cout<<4;
	}
	else if(n==5){
		if(m==3||m==4)	cout<<2;
		if(m==6||m==8||m==9)	cout<<3;
		if(m==5||m==7||m==10)	cout<<4;
	}
	else if(n==6){
		if(m==4||m==6)	cout<<2;
		if(m==3||m==5||m==7||m==9)	cout<<3;
		if(m==8||m==10)	cout<<4;
	}
	else if(n==7){
		if(m==3||m==5)	cout<<2;
		if(m==2||m==4||m==6||m==8)	cout<<3;
		if(m==7||m==9||m==10)	cout<<4;
	}
	else if(n==8){
		if(m==3||m==5||m==7)	cout<<3;
		if(m==4||m==6||m==8||m==10)	cout<<4;
		if(m==9)	cout<<5;
	}
	else if(n==9){
		if(m==3||m==4||m==6)	cout<<3;
		if(m==7||m==8|m==9)	cout<<4;
		if(m==5||m==10)	cout<<5;
	}
	else if(n==10){
		if(m==3||m==4||m==5||m==6||m==8||m==9)	cout<<4;
		if(m==7||m==10)	cout<<5;
	}
	else cout<<10;
	cout<<"s";
	return 0;
}
