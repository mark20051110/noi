#include <bits/stdc++.h>
using namespace std;
long long bug[100000],egg[1000000];
int main()
{
	long long x,y,z;
	cin>>x>>y>>z;
	bug[1]=1;
	for(int i = 1 ; i <= x ; i++)bug[i]=1;
	for(int i = x + 1 ; i <= z + 1; i++)
	{
		egg[i] = bug[i - x]*y;
		bug[i] = egg[i - 2]+bug[i - 1];
	}
	cout<<bug[z+1];
	return 0;	
} 
