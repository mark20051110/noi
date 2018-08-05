#include<bits/stdc++.h>
#define N 1005
#define M 105
#define O 1000005
using namespace std;
bool lis[N][M];//lis记录访问过的房间
struct node{
    int a,b;
}num[N][M];//用结构体记录每个房间下一个将要访问的房间（也就是读入的数据）
int main(){
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
    int n,m,v,x,y,ans=O;//n,m,v,x,y就不说了，ans记录目前消耗的最小体力（先赋值无穷大）
    scanf("%d%d%d%d%d",&n,&m,&v,&x,&y);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d%d",&num[i][j].a,&num[i][j].b);//以上4行为读入
    for(int j=1;j<=m;j++){
        int i=1,k=j,sum=0;//因为要改变j的值，所以先用k记录
        while(!lis[i][j]){
            lis[i][j]=1;//访问一个房间就记录一次
            int l=i,m=j;//因为要改变i，j的值，所以先用l,m记录
            i=num[l][m].a;//i更新为下一次访问的层
            j=num[l][m].b;//j更新为下一次访问的间
            sum+=abs(i-l)*v;//计算消耗的体力值
            if(i==x&&j==y){
                ans=min(ans,sum);
                break;
			}//如果满足目标，更新结果
        }
        j=k;//将j赋成原来的值
        memset(lis,0,sizeof(lis));//别忘了将记录清空，为下一次做准备
    }
    if(ans==O)
        printf("impossible\n");//如果始终没有更新答案，则无解
    else
        printf("%d\n",ans);//else输出
    return 0;
}
