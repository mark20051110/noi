#include <bits/stdc++.h>

using namespace std;

priority_queue<int,vector<int>,greater<int> >q;
int a[100010],n;
long long sum;

int main()
{
	cin>>n;
	for(int i = 1;i <= n;i++)
	{
		int t;
		cin>>t;
		q.push(t);
	}
	for(int i = 1;i < n;i++)
	{
		int x=q.top();
		q.pop();
		int y=q.top();
		q.pop();
		sum+=x+y;
		q.push(x+y);
	}
	cout<<sum;
	return 0;
}

