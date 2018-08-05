#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000, MAXM = 100;

struct room
{
	int a;
	int b;
	int vv;
}r[MAXN + 200][MAXM + 20];

queue < room > q;

int n, m, v, x, y, ans = 99999999;
int k1, k2, vis[1111][1111];
int a1[1111][1111], a2[1111][1111];

void bfs(int xx, int yy)
{
	int s = 0;
	
	room rr, z;
	rr.a = xx;
	rr.b = yy;
	rr.vv = 0;
	q.push(rr);

	memset(r, 0, sizeof (r));
	memset(vis, 0, sizeof(vis));
	
	while (!q.empty() )
	{
		rr = q.front();
		if (vis[rr.a][rr.b] == 1) 
			return ;
		vis[rr.a][rr.b] = 1;
		if (rr.a == x && rr.b == y)
		{
			ans = min(ans, rr.vv);
			return ;
		}
		z.a = a1[rr.a][rr.b];
		z.b = a2[rr.a][rr.b];
		if (z.a == 1) 
		{
			q.pop();
			continue;
		}
		int o;
		if (z.a - rr.a < 0) o = ( rr.a - z.a ) * v;
		else o = (z.a - rr.a ) * v;
		
		z.vv = r[rr.a][rr.b].vv + o;
		q.push(z);
		q.pop();
	}
}
int main()
{
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	cin >>n >> m>> v>> x>> y;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			scanf("%d%d", &a1[i][j], &a2[i][j]);
	for (int i = 1; i <= m; i++)
		bfs(1, i);	
	if (ans == 99999999) cout <<"impossible"<<endl;
	else cout << ans<< endl;
	return 0;
}
