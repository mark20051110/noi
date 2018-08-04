#include <bits/stdc++.h>

using namespace std;

int n,num;
char a,b,c;

void read()
{
	cin>>n>>a>>b>>c;
	return;
}

void print(int n,char a,char c,char b)
{
	cout<<num<<":"<<" from "<<a<<" to "<<c<<endl;
	return;
}

void work(int n,char a,char c,char b)
{
	if(n==0)return;
	work(n-1,a,b,c);
	num++;
	print(num,a,c,b);
	work(n-1,b,c,a); 
	return;
}

int main()
{
	read();
	work(n,a,c,b);//work(n,当前柱,目标柱,过渡柱);
	return 0;
}

