#include <bits/stdc++.h>
using namespace std;
class cmp
{
public:
    bool operator ()(int &i,int &j)
    {
        return i>j;
    }
};
int main()
{freopen("mj.in","r",stdin);
freopen("mj.out","w",stdout);
    int n,a;
    priority_queue<int,vector<int>,cmp>que;
    while(~scanf("%d",&n))
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            que.push(a);
        }
        int sum=0,x,y;
        while(que.size()>1)
        {
            x=que.top();
            que.pop();
            y=que.top();
            que.pop();
            que.push(x+y);
            sum+=x+y;
        }
        cout << sum<<endl;
}
return 0;}
