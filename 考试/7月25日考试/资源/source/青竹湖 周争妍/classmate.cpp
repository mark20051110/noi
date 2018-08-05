#include<bits/stdc++.h>
using namespace std;
int a[100100],x,m,v,sum=0,mi=999999;
int print(int su)
{
	mi=min(mi,sum);
}
int chu(int a,int b)
{
	int i=1;
	if(a/b*b<a)
	{
		while((a+i)/b*b<a)
		{
			i++;
		}return (a+i)/b;
	}
	else return a/b; 
}
void search(int i)
{
	sum+=abs(chu(a[i],m)-chu(i,m))*v;
	if(a[i]==x)
	{
		print(sum);sum=0;
		return;
	}
	else search(a[i]);
}
int main()
{
	int n,y,i,j,f,k,t=0;
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	scanf("%d%d%d%d%d",&n,&m,&v,&x,&y);
	x=(x-1)*m+y;
	for(i=1;i<=n*m;i++)
	  scanf("%d%d",&f,&k),a[i]=(f-1)*m+k;
	for(i=1;i<=n*m;i++)
	 if(a[i]==x)t=1;
	if(t==0)
	{
		printf("impossible");
		return 0;
	}
	for(i=1;i<=m;i++)
	 search(i);
	printf("%d",mi);
	return 0;
}
