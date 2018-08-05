#include <bits/stdc++.h>

using namespace std;

priority_queue<int>q;
int a[100010],n;
long long sum;

int main()
{
	cin>>n;
	for(int i = 1;i <= n;i++)
	{
		int t;
		cin>>t;
		q.push(-t);
	}
	for(int i = 1;i < n;i++)
	{
		int x=abs(q.top());
		q.pop();
		int y=abs(q.top());
		q.pop();
		sum+=abs(x+y);
		q.push(-abs(x+y));
	}
	cout<<sum;
	return 0;
}
