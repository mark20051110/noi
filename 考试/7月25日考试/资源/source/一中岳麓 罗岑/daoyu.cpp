#include <bits/stdc++.h>
using namespace std;
int a[50000+10];
bool bo[50000+10];
int main(){
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
	int n,q;
	scanf("%d%d",&n,&q);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);	
	for(int i=1;i<=q;i++){
		int h,ans,ok;
		scanf("%d",&h);
		for(int i=1;i<=n;i++)
			if(a[i]<=h) bo[i]=true;
		ans=ok=0,bo[n+1]=true;		
		for(int i=1;i<=n+1;i++){
			if(bo[i]&&ok) 
				ans++,ok=0;
			if(!bo[i]) ok=1;
		}
		printf("%d\n",ans);		
		memset(bo,false,sizeof(bo));
	}	
	return 0;
}
