#include <bits/stdc++.h>//�ϲ����� 
using namespace std;
int a[50000+10],ans;
int read()//��� 
{
	int s=0,w=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')	w=-1;c=getchar();}
	while(c>='0'&&c<='9')	s=s*10+c-'0',c=getchar();
	return s*w;
}
int main()
{
	freopen("mj.in","r",stdin);
	freopen("mj.out","w",stdout);
	int n=read();
	for(int i=1;i<=n;i++)
		a[i]=read();
	sort(a+1,a+n+1);
	for(int i=1;i<=n-1;i++)
	{
		a[i+1]+=a[i];
		ans+=a[i+1];
		a[i]=0;//ÿ�κϲ�������С�� 
		for(int j=i+1;j<=n-1;j++)
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);//������ð�� 
	}
	cout<<ans;
	return 0;
}
