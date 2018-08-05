#include <bits/stdc++.h>
using namespace std;
const int MN=(100+10);
struct node{
	int cen;
	int rank;
}s[MN*10][MN];
bool bo[MN*10][MN],check;
int n,m,v,sx,sy,ans=0x7ffffff;
void bfs(int px,int py){
	queue<int>x,y,z;
	x.push(px),y.push(py),
	z.push(0),bo[px][py]=true;
	while(!x.empty()){
		node t=s[x.front()][y.front()];
		int tx=t.cen,ty=t.rank;
		if(!bo[tx][ty]){
			bo[tx][ty]=true,
			x.push(tx),y.push(ty);
			if(tx!=x.front())
				z.push(z.front()+v);
			else z.push(z.front());	
			if(tx==sx&&ty==sy)
				ans=min(ans,z.back()),
				check=true;
		}
		x.pop(),y.pop(),z.pop();
	}	
}
int main(){
	freopen("classmate.in","r",stdin);
	freopen("classmate.out","w",stdout);
	ios::sync_with_stdio(false);
	cin>>n>>m>>v>>sx>>sy;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>s[i][j].cen>>s[i][j].rank;
	for(int i=1;i<=m;i++){
		memset(bo,false,sizeof(bo));
		bfs(1,i);
	}	
	if(check) cout<<ans;
	else cout<<"impossible";
	return 0;
}
