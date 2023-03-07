#include<bits/stdc++.h>
using namespace std;

void print(multiset <string> &st){
	for(auto it : st){
		cout << it << endl;
	}
}

int main(){

/// Ordered Set : O(log(n))

//     set <string> s;
//
//     s.insert("Mamun");
//     s.insert("Akand");
//     s.insert("Alizeh");
//
//     // print(s);
//     // s.erase("Akand");
//
//     auto f = s.find("Akand");
//     if(f!=s.end())
//         s.erase(f); //erase(Ekhane iterator or Direct value nite pare)
//     else
//         cout << "Not Found";
//
//	 print(s);

///Unordered_set : O(1)

//	 unordered_set <string> ss;
//
//	 ss.insert("Mamun");
//	 ss.insert("Alizeh");
//	 ss.insert("Akand");
//
//	 print(ss);

/// Multiset : O(log n)

	multiset <string> ms;

	ms.insert("Mamun");
	ms.insert("Alizeh");
	ms.insert("Mamun");
	ms.insert("Alizeh");

	auto f = ms.find("Mamun");  // First Mamun will be deleted
    if(f != ms.end()) ms.erase(f);

//    ms.erase("Mamun");        // All the Mamun will be deleted

	print(ms);
}
