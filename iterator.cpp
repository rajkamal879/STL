// Iterator types  :
/*
1. Input Iterator
2. Output Iterator
3. Forward Iterator
4. Bidirectional Iterator
5. Random Access Iterator

// **************************************************
container						iterator
-------------------------------------------------
1. vector           			random access
2. deque						random access
3. list							bidirectional access
4. map/multimap/set/multiset 	bidirectional access
5. stack/queue					No iterator
*/
//***************************************************
#include<bits/stdc++.h>
using namespace std;
#include<vector>
void file_i_o() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int main() {
	file_i_o();
	vector<int> v;
	for (int i = 1; i <= 10; i++) {
		v.push_back(i);
	}

	// declaring an iterator
	vector<int> :: iterator it = v.begin();
	// to traverse the vector.
	while (it != v.end()) {
		cout << *it << " ";
		it++;	// forward iterator
	}
	cout << endl;

	// to traverse the vector in reverse order
	it = v.end() - 1;
	while (it != v.begin() - 1) {
		cout << *it  << " ";
		it--;	// backward iterator
	}
	cout << endl;

	cout << *(it + 4) << endl;	// Random iterator

	// we need to define reverse iterator
	vector<int>::reverse_iterator it2;
	for (it2 = v.rbegin(); it2 != v.rend(); it2++) {
		cout << *it2 << " ";
	}

	// as vector and deque have random iterator.
	// so iterator works same for deque as for vector..
}