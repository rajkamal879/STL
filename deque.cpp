// deque standard template library
// vector :
// insert at last -- in vector : O(1)
// insert at begin -- in vector: O(n)

// deque :
// insert at last : O(1)
// insert at begin : O(1)

#include<iostream>
using namespace std;
#include<deque>

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

	deque<string> d;
	d.push_back("kamal");	// insert at end

	d.push_front("raj");

	cout << "Front element : " << d.front() << endl;	// accessing front element.
	cout << "last element : " << d.back() << endl;		// accessing last element.

	// d.pop_front();	// remove front element
	// d.pop_back();	// remove back element

	cout << "Size : " << d.size() << endl;


	// accessing element
	for (int i = 0; i < d.size(); i++) {
		cout << d.at(i) << " ";	// checks whether in the bound or not.-- safer.
		// cout << d[i] << " ";
	}
	cout << endl;

	// accessing element
	for (auto s : d) {
		cout << s << " ";
	}
	cout << endl;

	d.clear();	// clearing the deque container.

	d.insert(d.begin() + 1, "new element");	// inserting at index 1.

	//d.erase(starting iterator, ending iterator); [)
	// ending iterator is not included in the range.
	//d.erase(starting iterator)

}