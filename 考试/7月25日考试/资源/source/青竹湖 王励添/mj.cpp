#include <bits/stdc++.h>

using namespace std;

const int MAXN = 50000;

int n, d[MAXN + 200], l[MAXN + 200], h[MAXN + 200];

int s(int f, int k)
{
	if (k - f == 1) 
		return l[k] + l[f];
	int minn = 999999999;
	int p = d[k - 1] + h[k];
		
	for (int i = k - 1; i > f; i--)
		minn = min(minn, s(i, k) + d[i - 1] + h[k]);
	return min(p, minn);
}

int main()
{
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
    cin >> n;
    
    scanf("%d%d",&l[1],&l[2]);
    d[1] = 0;
    d[2] = l[1] + l[2];
    h[1] = l[1];
    h[2] = l[1] + l[2];
    
    for (int i = 3 ; i <= n; i++)
	{
    	scanf("%d", &l[i]);
    	h[i] = h[i - 1] + l[i];
    	d[i] = s(1, i);
	}
	cout << d[n]<< endl;
	return 0;
}
