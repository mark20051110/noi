#include <bits/stdc++.h>
using namespace std;

int a[1001][10001];
int n, m, t;
bool vis[1001], r[1001];
void dfs(int k)
{
    if (r[t]) //找到了就返回。
      return;
    vis[t] = true;
    if (k == t) //重合即为环。
    {
        r[t]=true;
        return;
    }
    for (int i = 1; i <= i[t][0]; i++)
      if (!vis[a[k][i]]) //未找过。
        DFS(a[k][i]);
}
int main() //普通DFS。
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        a[t1][0]++; //节省空间，存邻接点数量。
        a[t1][a[t1][0]] = t2;
    }
    for (t = 1; t <= n; t++)
    {
        memset(vis, false, sizeof(vis));
        dfs(a[t][1]); //DFS每条边。
    }
    for (int i = 1; i <= n; i++)
      if (r[i])
        cout << "T" << endl;
      else
        cout << "F" << endl;
    return 0;
}