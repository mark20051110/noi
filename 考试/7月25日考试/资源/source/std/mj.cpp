#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
priority_queue<LL, vector<LL>, greater<LL> >q; // 定义小的先出队
int main()
{
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
    while(!q.empty())
        q.pop();
    LL x,y,z;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&x);
        q.push(x);
    }
    LL ans=0;
    while(q.size()>1)
    {
        x=q.top();q.pop();
        y=q.top();q.pop();
        z=x+y;
        q.push(z);
        ans=ans+z;
    }
    printf("%lld\n",ans);
    return 0;
}
