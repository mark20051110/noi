#include<bits/stdc++.h>
#define N 1005
#define M 105
#define O 1000005
using namespace std;
bool lis[N][M];//lis��¼���ʹ��ķ���
struct node{
    int a,b;
}num[N][M];//�ýṹ���¼ÿ��������һ����Ҫ���ʵķ��䣨Ҳ���Ƕ�������ݣ�
int main(){
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
    int n,m,v,x,y,ans=O;//n,m,v,x,y�Ͳ�˵�ˣ�ans��¼Ŀǰ���ĵ���С�������ȸ�ֵ�����
    scanf("%d%d%d%d%d",&n,&m,&v,&x,&y);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d%d",&num[i][j].a,&num[i][j].b);//����4��Ϊ����
    for(int j=1;j<=m;j++){
        int i=1,k=j,sum=0;//��ΪҪ�ı�j��ֵ����������k��¼
        while(!lis[i][j]){
            lis[i][j]=1;//����һ������ͼ�¼һ��
            int l=i,m=j;//��ΪҪ�ı�i��j��ֵ����������l,m��¼
            i=num[l][m].a;//i����Ϊ��һ�η��ʵĲ�
            j=num[l][m].b;//j����Ϊ��һ�η��ʵļ�
            sum+=abs(i-l)*v;//�������ĵ�����ֵ
            if(i==x&&j==y){
                ans=min(ans,sum);
                break;
			}//�������Ŀ�꣬���½��
        }
        j=k;//��j����ԭ����ֵ
        memset(lis,0,sizeof(lis));//�����˽���¼��գ�Ϊ��һ����׼��
    }
    if(ans==O)
        printf("impossible\n");//���ʼ��û�и��´𰸣����޽�
    else
        printf("%d\n",ans);//else���
    return 0;
}
