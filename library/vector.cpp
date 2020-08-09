// C++ program to illustrate the 
// iterators in vector 
//? begin() – Returns an iterator pointing to the first element in the vector
//? end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
//? rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to fi?rst element
//? rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
//? cbegin() – Returns a constant iterator pointing to the first element in the vector.
//? cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
//? crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
//? crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end) 
//* Execution g++ ~/Desktop/competetive-programming/library/vector.cpp
#include <iostream>
#include <vector>
  
using namespace std; 
  
int main() 
{ 
    vector<int> g1; 
  
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
  
    cout << "Output of begin and end: "; 
    for (auto i = g1.begin(); i != g1.end(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of cbegin and cend: "; 
    for (auto i = g1.cbegin(); i != g1.cend(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of rbegin and rend: "; 
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
        cout << *ir << " "; 
  
    cout << "\nOutput of crbegin and crend : "; 
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
        cout << *ir << " "; 
    cout<<endl<<endl<<endl<<endl;
    //? size() – Returns the number of elements in the vector.
    //? max_size() – Returns the maximum number of elements that the vector can hold.
    //? capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    //? resize(n) – Resizes the container so that it contains ‘n’ elements.
    //? empty() – Returns whether the container is empty.
    //? shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    //? reserve() – Requests that the vector capacity be at least enough to contain n elements.
    cout << "Size : " << g1.size(); 
    cout << "\nCapacity : " << g1.capacity(); 
    cout << "\nMax_Size : " << g1.max_size(); 
  
    // resizes the vector size to 4 
    g1.resize(4); 
  
    // prints the vector size after resize() 
    cout << "\nSize : " << g1.size(); 
  
    // checks if the vector is empty or not 
    if (g1.empty() == false) 
        cout << "\nVector is not empty"; 
    else
        cout << "\nVector is empty"; 
  
    // Shrinks the vector 
    g1.shrink_to_fit(); 
    cout << "\nVector elements are: "; 
    for (auto it = g1.begin(); it != g1.end(); it++) 
        cout << *it << " "; 
    return 0; 
} 