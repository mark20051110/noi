#include<bits/stdc++.h>
using namespace std;
char a[1000011],b[1000011];
int main()
{
	freopen("gene.in","r",stdin);
	freopen("gene.out","w",stdout);
	int m,n,ans=0,j=-1,i=-1,k=0,ss,k1=0;
	cin>>n>>m;
	scanf("%s\n",&a);scanf("%s",&b);
	int len1=strlen(a),len=strlen(b);
	ss=n<m?n:m;
	while(k<ss && k1<ss)
	{
		if(a[++i]==b[++j])
			ans++;
		if(i==len1)
		{
			i=-1;
			k++;
		}
		if(j==len)
		{
			j=-1;
			k1++;
		}
	}
	//cout<<ans;
	cout<<--ans;
	return 0;
}
