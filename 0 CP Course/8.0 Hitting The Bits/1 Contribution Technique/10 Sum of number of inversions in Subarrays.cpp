#include<bits/stdc++.h>
using namespace std;

int main(){
   int n; cin>>n;
   int v[n+1];
   for(int i=1; i<=n; i++){
		cin >> v[i];
   }
   long long ans=0;
   for(int i=1; i<=n; i++){
		for(int j=i+1; j<=n; j++){
   			if(v[i] > v[j]){
   				ans += i * (n-j+1);
   			}
   		}
   }
   cout << ans << endl;
}





















