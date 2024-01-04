#include<bits/stdc++.h>
using namespace std;

int main(){
   
   int n; cin>>n;
   
   while(n--){
      string s; cin>>s;
      stack<char>st;
      
      bool flag = 1;
      
      for(int i=0; i<(int)s.size(); i++){
         if(s[i]=='(') st.push('(');
         else{
            if(!st.empty()) st.pop();
            else {flag = 0; break;}
         }
      }
      
      if(flag == 0 or !st.empty()) cout << "NO" << endl;
      else cout << "YES" << endl;
   }
   
}