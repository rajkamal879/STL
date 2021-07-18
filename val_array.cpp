/********************************
std:: valarray is the class for representing and manipulating arrays of values.
It supports element-wise mathematical operations and various forms of generalized subscript operators, slicing and indirect access.

Functions to cover: * min/max
					* sum  of all elements / swap two valarrays
					* shift/cshift
					* size / resize
					* apply
					* slice

Operators:			 = / == / += / -= / *= /

************************************/

#include<iostream>
#include<valarray>
using namespace std;
void file_i_o() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int square(int a) {
	return a * a;
}
int main() {
	file_i_o();
	// Initialising a val array.
	int arr[] = {1, 2, 3, 4};
	valarray<int> va = {10, 20, 30, 40};

	valarray<int> va1(10);	// valarray of float of size 10 with all zeros..

	valarray<int> va2(arr, 3);	// creating valarray from another array arr and first 3 element.

	valarray<int> v;	// size = 0.

	// Iterating over the valarray using for each loop.
	for (int a : va1) {
		cout << a << " ";
	}
	cout << endl;

	// swap function.
	// swapping va and va1
	va.swap(va1);
	va1.swap(va);

	// size function
	cout << va.size() << endl;

	//  sum function : sum of all the elements of valarray
	cout << va.sum() << endl;

	// max and min function.
	cout << va.max() << " " << va.min() << endl;

	// shift and cshift (circular shift) function.


	va = va.shift(1);	// (linear)left shift by 1.

	va = va.shift(-1);	//(linear) right shift by 1.

	va = va.cshift(1);	// circular left shift by 1.
	// circular shift is same as rotating the array in the clockwise direction.
	va = va.cshift(-2);	// circular right shift by 2;

	// resize function: it resizes the valarray to the passed argument and all value become 0.

	// apply function helps to apply a particular function on valarray(more specifically on each element of valarray)
	// suppose we want to square all the corresponding element.
	// I have written a square function above with signature--> int square(int );
	// Now apply this square function on valarray
	va = va.apply(square);
	// each element is squared.

	// operators :-

	va = va1; // assigning va1 to va (assignment operator) va[i] = va1[i].

	va += val1;	// va[i] += va[i]+va1[i];
	va -= va1;
	va *= va1;

	valarray<bool> check = (va == va1);
	// it will compare each corresponding ele of va and va1;
	// if va[i] == va1[i] ==> gives check[i] = 1 else check[i] = 0.
	// if all elements of check valarray are 1, then both are same.
	cout << "////////////////////////\n";
	// slice function.
	int k = 10;
	va[slice(0, 3, 2)] = k;
	// starting from index 0, at the interval of 2, take 3 indices and update its value to k.
	// arguments: (starting index, # elements , interval)
}
