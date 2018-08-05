#include<bits/stdc++.h>
#include <sstream>
#define For(i,l,r) for(int i=(l);i<=(r);i++)
#define ll long long
using namespace std;

const char* name="magpie";

int randx(int l,int r){
	return round(rand()*1.0/RAND_MAX*(r-l)+l);
}

void makedata(){

	int n=randx(500,1000);
	int m=randx(500,1000);
	cout<<n<<" "<<m<<endl;
}		

int main() {

	int l,r;
	string Dfile;
	srand(time(NULL));
	cin>>l>>r;
	For(i,l,r){
		Dfile=string(name);
		char tmp[3];
		itoa(i,tmp,10);
		Dfile=Dfile+tmp+".in";
		freopen(Dfile.c_str(),"w",stdout);
		makedata();
		//system((string("c:\\Windows\\System32\\notepad ")+Dfile).c_str());
	}
	return 0;
}

