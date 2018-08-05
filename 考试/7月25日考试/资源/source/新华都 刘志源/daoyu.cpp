#include<bits/stdc++.h>
#define MAXN 50030
using namespace std;
int a[MAXN];
int main()
{
    
	freopen("daoyu.in","r",stdin);
	freopen("daoyu.out","w",stdout);
    int popop,n,m,i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	    cin>>a[i];
	for(i=1;i<=m;i++)
	{
		cin>>popop;
		int op=0,k=0,l,o;
		for(j=1;j<=n;j++)
		    if(a[j]<=popop)
			{
				k++;
				l=j;
				o=j;
			    while(l>=0)
			    {
			    	if(a[l]>popop)
			    	    break; 
			    	l--;
				}
				while(o<=n)
			    {
			    	if(a[o]>popop)
			    	    break; 
			    	o++;
				}
				if(l!=-1&&o!=n+1&&a[j-1]>popop)
		           op++;
			}
		if(op!=0||(op==0&&k!=n))
    		cout<<op+1<<endl;
	    else
	        cout<<"0"<<endl;
	}
	return 0;
}
