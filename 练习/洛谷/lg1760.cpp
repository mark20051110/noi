#include <bits/stdc++.h>

using namespace std;

long long n,a[16000],len=1,temp;

void read() {
    cin>>n;
    return;
}

void js() {
    int lena=len,x=1;
    for(int i = 1 ; i <= lena ; i++)
    {
        a[i]=a[i]+a[i]+x;
        x=0;
        if(a[i]>=10)
        {
            x=a[i]/10;
            a[i]%=10;
        }
    }
    if(x!=0)
    {
        a[++len]+=x;
    }
    return;
}

int work() {
    a[1]=1;
    if(n<=1)
        return 0;
    for(int i = 2 ; i <= n ; i++) {
        //a[i]=2*a[i-1]+1;
        js();
    }
    return 0;
}

void print() {
    if(n==0)
    {
        cout<<0;
        return;
    }
    if(n==1)
    {
        cout<<1;
        return;
    }
    for(int i = len ; i >= 1 ; i--)
        cout<<a[i];
    return;
}

int main() {
    read();
    if(n>1)
    	work();
    print();
    return 0;
}

