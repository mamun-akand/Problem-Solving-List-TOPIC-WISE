//Policy Based Data Structure - PBDS
#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds; /* find_by_order, order_of_key *//* less<int> = asc, greater<int> = desc, less<int> = multiset */

int main() {
	pbds A;

	A.insert(1);
	A.insert(10);
	A.insert(2);
	A.insert(7);
	A.insert(2);  //ordered set only contains unique values

	// A contains
	cout << "A = ";
	for (auto it:A){
		cout << it << " ";
	}
	cout << endl << endl;

	// finding kth element
	cout << "0th: " << *A.find_by_order(0) << endl;
	cout << "1st: " << *A.find_by_order(1) << endl;
	cout << "2nd: " << *A.find_by_order(2) << endl;
	cout << "3rd: " << *A.find_by_order(3) << endl;
	cout << endl;

	// finding no of elements strictly smaller than X value
	cout << A.order_of_key(7) << endl;  // 2
	cout << A.order_of_key(6) << endl;  // 2
	cout << A.order_of_key(11) << endl; // 4
	cout << A.order_of_key(1) << endl;  // 0
	cout << endl;

	// Lower Bound of X = first element >= X in the set
	cout << *A.lower_bound(6) << endl;
	cout << *A.lower_bound(2) << endl;
	cout << endl;

	// Upper Bound of X = first element > X in the set
	cout << *A.upper_bound(6) << endl;
	cout << *A.upper_bound(1) << endl;
	cout << endl;

	// Remove elements
	A.erase(1);
	A.erase(11); //element that is not present is not affected

	// A contains
	cout << "A = ";
	for (auto it : A){
		cout << it << " ";
	}
	cout << endl;
}