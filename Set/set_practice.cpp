#include <iostream>
#include <string>
#include <set>
#include <unordered_set>


/*
 A set is a data structure that stores multiple unique elements in a single variable. 
 Elements of a set are not accessible by index like vectors. 
 Instead, they are accessible by key values. In a set, the value of each element acts as its own key that uniquely identifies it.
*/

// Note: A set cannot contain duplicate elements. If the initializer list contains duplicate values, only one copy of the value will be kept in the set.
// Note: Because the keys of a set are immutable, the elements of a set cannot be modified.
// Note: Only use set when you need to store elements in a sorted fashion. Otherwise use unordered_set because it’s generally faster.


int main() {


//two ways of initializing a set. 

// std::unordered_set<int> even({4, 2, 8});
    std::unordered_set<int> even;

    even.insert(2);
    even.insert(8);
    even.insert(4);
    even.insert(4);

    std::cout << "even numbers: ";
    for (int n : even) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

// When .erase() is used this way, it returns 1 if an element was successfully erased, and 0 otherwise.
    even.erase(2);

    std::cout << "even numbers: ";
    for (int n : even) {
        std::cout << n << " ";
    }
    std::cout << std::endl;


// see if an element exists

    if (even.count(8)) {
        std::cout << "8 is an even number\n";
    }

// Sorted vs unsorted

std::unordered_set<int> unordered({4, 2, 7, 1, 3});
std::cout << "unordered_set: ";
for(int n: unordered) {
  std::cout << n << " ";
}

std::cout << "\n";

std::set<int> ordered({4, 2, 7, 1, 3});
std::cout << "set: ";
for(int n: ordered) {
  std::cout << n << " ";
}

}