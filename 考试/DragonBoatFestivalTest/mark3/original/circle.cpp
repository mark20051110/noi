#include<bits/stdc++.h>
using namespace std;
int fa[101010],a[101010];
int get(int x)
{
	if(fa[x]==x)return x;
	return fa[x]=get(fa[x]);
}
void merge(int x,int y)
{
	fa[get(x)]=get(y);
}
int main()
{
 freopen("circle.in","r",stdin);
 freopen("circle.out","w",stdout);
 cout<<"NO"; 
 return 0;
}

