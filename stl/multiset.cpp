#include <iostream> 
#include <set> 
#include <iterator> 

using namespace std; 

int main() 
{ 
    // *Multiset - that can store multiple occurrnace of  same elements
    // *stored in a specific -> sorted according to internal comparsion object
    // *values once inserted cannot be modified
    // *associative container -> elements are refered by their value and not by the index
    // *underlying implementation is a bst
	// empty multiset container 
	multiset <int, greater <int> > gquiz1;		 

	// insert elements in random order 
	gquiz1.insert(40); 
	gquiz1.insert(30); 
	gquiz1.insert(60); 
	gquiz1.insert(20); 
	gquiz1.insert(50); 
	gquiz1.insert(50); // 50 will be added again to the multiset unlike set 
	gquiz1.insert(10); 

	// printing multiset gquiz1 
	multiset <int, greater <int> > :: iterator itr; 
	cout << "\nThe multiset gquiz1 is : "; 
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) 
	{ 
		cout << '\t' << *itr; 
	} 
	cout << endl; 

	// assigning the elements from gquiz1 to gquiz2 
	multiset <int> gquiz2(gquiz1.begin(), gquiz1.end()); 

	// print all elements of the multiset gquiz2 
	cout << "\nThe multiset gquiz2 after assign from gquiz1 is : "; 
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
	{ 
		cout << '\t' << *itr; 
	} 
	cout << endl; 

	// remove all elements up to element with value 30 in gquiz2 
	cout << "\ngquiz2 after removal of elements less than 30 : "; 
	gquiz2.erase(gquiz2.begin(), gquiz2.find(30)); 
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
	{ 
		cout << '\t' << *itr; 
	} 

	// remove all elements with value 50 in gquiz2 
	int num; 
	num = gquiz2.erase(50); 
	cout << "\ngquiz2.erase(50) : "; 
	cout << num << " removed \t" ; 
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
	{ 
		cout << '\t' << *itr; 
	} 

	cout << endl; 

	//lower bound and upper bound for multiset gquiz1 
	cout << "gquiz1.lower_bound(40) : "
		<< *gquiz1.lower_bound(40) << endl; 
	cout << "gquiz1.upper_bound(40) : "
		<< *gquiz1.upper_bound(40) << endl; 

	//lower bound and upper bound for multiset gquiz2 
	cout << "gquiz2.lower_bound(40) : "
		<< *gquiz2.lower_bound(40) << endl; 
	cout << "gquiz2.upper_bound(40) : "
		<< *gquiz2.upper_bound(40) << endl; 
		
		return 0; 

} 

//gfg article for multiset https://www.geeksforgeeks.org/multiset-in-cpp-stl/
//? In multiset we can erase the value of entity by its value and iterator postion, auto it = m.begin() 
// m.erase(it) erases by its position of iterator and m.erase(value) erases the element that having the value == value.
// And multiset if one value is erased all elements that having the same value will get erased .
// insert,delete in multiset takes O(logn) time .