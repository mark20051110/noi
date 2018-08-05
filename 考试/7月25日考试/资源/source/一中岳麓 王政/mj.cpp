#pragma G++ optimize(3)//≥Ù—ı”≈ªØ 
#pragma GCC optimize(3)
#include <bits/stdc++.h>
using namespace std;
int a[50001];
inline void read(int &o)
{
	char p;
	int data=0;
	p=getchar();
	while(p>='0'&&p<='9') {data=data*10+p-'0';p=getchar();}
	o=data;
	return;
}
void del(int k)
{
	int i;
	for(i=3;i<=k;i++)
		a[i-1]=a[i];
	a[k]=0;
	return;
}
int main()
{
	int n,data=0;
	register int i;
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	read(n);
	for(i=1;i<=n;++i)
		read(a[i]);
	for(i=1;i<n;++i)
	{
		sort(a+1,a+1+n-i+1);
		a[1]+=a[2];
		data+=a[1];
		del(n-i+1);
	}
	printf("%d",data);
}
