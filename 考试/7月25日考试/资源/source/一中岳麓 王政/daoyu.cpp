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
int main()
{
	bool o;
	register int n,q,i,k,j,maxx,l;
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	read(n);
	read(q); 
	for(i=1;i<=n;++i)
		read(a[i]);
	maxx=a[n];
	for(i=1;i<=q;++i)
	{
		o=1;
		read(k);
		l=0;
		for(j=1;j<=n;j++)
		{
			if(a[j]>k) {if(o) l++;o=0;}
			else o=1;
		} 
		printf("%d\n",l);
	} 
}
