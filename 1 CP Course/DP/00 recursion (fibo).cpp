#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const ll N = 1000+5;
ll save[N];

ll fibo(ll n){
	if(n==0) return 0;
	if(n==1) return 1;
	if(save[n] != -1) return save[n];
	return save[n] = fibo(n-1) + fibo(n-2);
}

int main(){
	memset(save, -1, sizeof(save));
	cout << fibo(7) << endl;
}





















