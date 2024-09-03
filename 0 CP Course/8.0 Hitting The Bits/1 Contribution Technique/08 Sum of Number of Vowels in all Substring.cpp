// https://leetcode.com/problems/vowels-of-all-substrings/

#include<bits/stdc++.h>
using namespace std;

long long countVowels(string word) {
	long long n = word.size(), ans = 0;
	
    for(long long i=0; i<n; i++){
    	if(word[i]=='a' or word[i]=='e' or word[i]=='i' or word[i]=='o' or word[i]=='u'){
    		ans += (i+1) * (n-i);
    		// cout << (i+1) << " " << (n-i+1) << " " << (i+1) * (n-i+1) << endl;
    	}
    }
    return ans;
}

int main(){
	string s; cin>>s;
	cout << countVowels(s);
}





















