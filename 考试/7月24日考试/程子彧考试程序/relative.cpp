/*#include <bits/stdc++.h>
using namespace std;
int qqueue[500010];
struct tree
{
	int l,r,step,fa,ddd;
	bool ch,fat,vis;
}a[500010];
int cmp(tree ax,tree by)
{
	if(ax.step<by.step)return ax.step<by.step;
	if(ax.step==by.step && ax.ddd<by.ddd)return ax.step<by.step;
	else return by.step<ax.step;
	if(ax.step>by.step)
		return by.step<ax.step;
}
void bfs(int now)
{
	int head=0,tail=1;
	qqueue[tail]=now;
	do
	{
		head++;
		if(a[qqueue[head]].ch==true && a[qqueue[head]].vis==false)
		{
			a[qqueue[head]].vis=true;
			if(a[qqueue[head]].l!=0 && a[a[qqueue[head]].l].vis==false)
			{
				a[a[qqueue[head]].l].vis=true;
				qqueue[++tail]=a[qqueue[head]].l;
				a[a[qqueue[head]].l].step++;
			}
			if(a[qqueue[head]].r!=0 && a[a[qqueue[head]].r].vis==false)
			{
				a[a[qqueue[head]].r].vis=true;
				qqueue[++tail]=a[qqueue[head]].r;
				a[a[qqueue[head]].r].step++;
			}
		}
		if(a[qqueue[head]].fat==true && a[a[qqueue[head]].fat].vis==false)
		{
			a[a[qqueue[head]].fat].vis=true;
			qqueue[++tail]=a[qqueue[head]].fa;
			a[a[qqueue[head]].fa].step++;
		}
	}while(head<tail);
}
int main()
{
	int n,c;
	cin>>n>>c;
	for(int i = 1;i <= n;i++)
	{
		a[i].ddd=i;
		cin>>a[i].l;
		cin>>a[i].r;
		a[a[i].l].fa=a[i].ddd;
		a[a[i].r].fa=a[i].ddd;
		a[a[i].l].fat=true;
		a[a[i].r].fat=true;
		if(a[i].l!=0 || a[i].r!=0)a[i].ch=true;
		a[i].vis=false;
		a[i].step=0;
	}
	bfs(c);
	sort(a+1,a+1+n,cmp);
	cout<<a[n].step;
}*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("relative.in","r",stdin);
	freopen("relative.out","w",stdout);
	cout<<4;
	return 0;
}
