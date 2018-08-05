#include <bits/stdc++.h>

using namespace std;

int n,a[110],ans[110];
 
void read() {
	cin>>n;
	for(int i = 1 ; i <= n ; i++)
		cin>>a[i];
	return;
}

int work() {
	for(int i = 1 ; i <= n ; i++)
		for(int j = 1 ; j <= i ; j++)
		{
			if(a[i]>a[j])
				ans[i]++;
		}
	return 0;
}

void print() {
	for(int i = 1 ; i <= n ; i++)
		cout<<ans[i]<<" ";
	return;
}

int main() {
	read();
	work();
	print();
	return 0;
}

