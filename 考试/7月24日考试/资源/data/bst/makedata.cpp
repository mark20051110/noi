#include<bits/stdc++.h>
#define For(i,l,r) for(int i=(l);i<=(r);i++)
using namespace std;
int randx(int l,int r){
	return l+rand()%(r-l+1);
} 
int main(){
	freopen("bst9.in","w",stdout);
	int n=randx(100,100);
	For(i,1,n)
		cout<<randx(1,100)<<" ";
	return 0;
} 
