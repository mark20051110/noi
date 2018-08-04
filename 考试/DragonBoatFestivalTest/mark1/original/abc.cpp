#include<bits/stdc++.h>
using namespace std;
int a[1010];
struct note
{
    int i,j,k;
}ans[1010];
int tt[10];
int main()
{
    freopen("abc.in","r",stdin);
    freopen("abc.out","w",stdout);
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
            for(int k=j+1;k<=n;k++)
                if(a[i]+a[j]+a[k]==0)
                 {
                    sum++;
                    tt[1]=a[i];tt[2]=a[j];tt[3]=a[k];
                    sort(tt+1,tt+3+1);
                    ans[sum].i=tt[1];ans[sum].j=tt[2];ans[sum].k=tt[3];
                 }
    if(sum==0)
    {
        cout<<"No Solution"<<endl;
        return 0;
    }
    for(int i=1;i<=sum;i++)
        cout<<ans[i].i<<" "<<ans[i].j<<" "<<ans[i].k<<endl;
    return 0;   
}
