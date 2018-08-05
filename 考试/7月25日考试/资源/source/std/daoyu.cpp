#include <bits/stdc++.h>
using namespace std;

int n, Q, sum, now, ans[50047];
struct node {
	int x, y;
}a[50047], q[50047];
bool vis[50047];

bool cmp(node a, node b) {
	return a.x < b.x;
}

int main() {
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	scanf("%d%d", &n, &Q);
	for(int i = 1; i <= n; i++) scanf("%d", &a[i].x); for(int i = 1; i <= n; i++) a[i].y = i;
	for(int i = 1; i <= Q; i++) scanf("%d", &q[i].x); for(int i = 1; i <= Q; i++) q[i].y = i;
	sort(a + 1, a + n + 1, cmp);
	sort(q + 1, q + n + 1, cmp);
	sum = 1; now = 1;
	for(int i = 1; i <= Q; i++) {
		while(a[now].x <= q[i].x && now <= n) {
			if(a[now].y == 1) {if(vis[2]) sum--;}
			else if(a[now].y == n) {if(vis[n - 1]) sum--;}
			else {
				if(vis[a[now].y - 1] && vis[a[now].y + 1]) sum--;
				else if(!vis[a[now].y - 1] && !vis[a[now].y + 1]) sum++;
			}
			vis[a[now++].y] = true;
		}
		ans[q[i].y] = sum;
	}
	for(int i = 1; i <= Q; i++) printf("%d\n", ans[i]);
}
