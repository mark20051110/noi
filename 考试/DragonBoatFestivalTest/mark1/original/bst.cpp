#include<bits/stdc++.h>
using namespace std;
int a[200000];
int main()
{
    freopen("bst.in","r",stdin);
    freopen("bst.out","out",stdout);
    int n,max=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int a1,a2;
        cin>>a1>>a2;
        a[a1]++;a[a2]++;
        int a3=a1>a2?a1:a2;
        if(a3>max)max=a3;
    }
    for(int i=1;i<=max;i++)
    {
        if(a[i]!=0)
            cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
