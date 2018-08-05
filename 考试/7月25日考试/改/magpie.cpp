#include <bits/stdc++.h>

using namespace std;

int n,m,mapniu[1010][1010],mapzhi[1010][1010],ans=0x7fffffff;
int niux[]={0,-2,-1,1,2, 2, 1,-1,-2},zhix[]={0,-2,2, 2,-2};
int niuy[]={0, 1, 2,2,1,-1,-2,-2,-1},zhiy[]={0, 2,2,-2,-2};

void read() {
	cin>>n>>m;	
	return;
}

void bfsniu(){
	queue<int>x,y;
	x.push(n),y.push(m);
	mapniu[n][m]=0;
	int step=0;
	while(!x.empty()){
		for(int i = 1;i <= 8;i++){
			int xx=x.front()+niux[i],yy=y.front()+niuy[i];
			if(xx >= 1 && xx <= n && yy >= 1 && yy <= m && mapniu[xx][yy] == 0){
				x.push(xx),y.push(yy);
				mapniu[xx][yy] = mapniu[x.front()][y.front()]+1;
			}
		}
		x.pop(),y.pop();
	}
	return;
}

void bfszhi(){
	queue<int>x,y;
	mapzhi[1][1]=0;
	int step=0;
	x.push(1),y.push(1);
	while(!x.empty()){
		for(int i = 1;i <= 4;i++){
			int xx=x.front()+zhix[i],yy=y.front()+zhiy[i];
			if(xx >= 1 && xx <= n && yy >= 1 && yy <= m && mapzhi[xx][yy] == 0){
				x.push(xx),y.push(yy);
				mapzhi[xx][yy] = mapzhi[x.front()][y.front()]+2;
			}
		}
		x.pop(),y.pop();
	}	
	return;
}
int work() {
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			if(mapniu[i][j]!=0 && mapzhi[i][j]!=0)
				ans=min(max(mapniu[i][j],mapzhi[i][j]),ans);
			else if(i==1 && j==1 && mapniu[1][1]!=0){
					ans=min(ans,mapniu[1][1]);
			}
			else if(i==n && j==m && mapzhi[n][m]!=0){
				ans=min(ans,mapzhi[n][m]);
			}
		}
	}
	return 0;
}

void print() {
	cout<<ans<<"s";
	return;
}

int main() {
	//freopen("magpie.in","r",stdin);
	//freopen("magpie.out","w",stdout);
	read();
	bfsniu();
	bfszhi();
	work();
	print();
	return 0;
}
