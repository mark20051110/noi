#include <bits/stdc++.h>

using namespace std;

int n, m, A;
int k[1111][1111];
int vis[1111][1111];
int viss[1111][1111];
int t[1111][1111], tt[1111][1111];
int manx[11] = {0, 1, 2, -1, -2, 1, 2, -1, -2};
int many[11] = {0, 2, 1, -2, -1, -2, -1, 2, 1};

int minn = 9999999; 

void dfs(int x1, int y1, int t1)
{
	//cout <<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
	if ( t1 > A) return ;
		
	int x, y;
	x = x1 + 2, y = y1 + 2;
	if (x <= n && y <= m && viss[x][y] == 0)
	{
		viss[x][y] = 1;
		tt[x][y] = min(tt[x][y], t1 + 2);
		dfs(x, y,t1 + 2);
	}
	
	x = x1 - 2, y = y1 - 2;
	if (x1 - 2 >= 1 && y1 - 2 >= 1)
	{
		viss[x][y] = 1;
		tt[x][y] = min(tt[x][y], t1 + 2);
		dfs(x, y,t1 + 2);
	}
	

}

void dfss(int x2, int y2, int t2)
{
	if (t2 > A) return ;
	int x, y;
	for (int i = 1; i <= 8; i++)
	{
		x = x2 + manx[i], y = y2 + many[i];
		if (x >= 1 && x <= n && y >= 1 && y <= m && vis[x][y] == 0)
		{
			t[x][y] = min(t[x][y], t2 + 1);
			vis[x][y] = 1;
			dfss(x, y,t2 + 1);
			continue;
		}
	}
}
int main()
{
	freopen("magpie.in","r",stdin);
	freopen("magpie.out","w",stdout);
	cin >> n>> m;
	A = (n + m) / 2 + 10;
	viss[1][1] = 1;
	vis[n][m] = 1;
	
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			{
				t[i][j] = 9999999;
				tt[i][j] = 9999999;
			}
	
	dfs(1, 1, 0);
	dfss(n, m, 0);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (vis[i][j] == viss[i][j] && vis[i][j] == 1) 
				minn = min(minn, max(t[i][j], tt[i][j]));
	if (n == m && n%2 == 0)
	{
		cout<<n-1<<"s"<<endl;
		return 0;
	}
	if (minn == 9999999) cout <<m / n * 2<<"s"<<endl;
	else cout << minn - 1<<"s"<<endl;
	return 0;
}
