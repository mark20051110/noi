#include <bits/stdc++.h>
using namespace std;
int a[500001];
int read()//¿ì¶Á 
{
	int s=0,w=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')	w=-1;c=getchar();}
	while(c>='0'&&c<='9')	s=s*10+c-'0',c=getchar();
	return s*w;
}
int main()
{
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	int n=read(),m=read(),h,ans;
	for(int i=1;i<=n;++i)
		a[i]=read();
	for(int i=1;i<=m;++i)
	{
		ans=0;
		h=read();
		for(int j=1;j<=n;++j)
			if(a[j]>h&&((j-1>0&&a[j-1]<=h)||(j+1<=n&&a[j+1]<=h)))
				++ans;
		cout<<ans<<endl;
	}
	return 0;
}
