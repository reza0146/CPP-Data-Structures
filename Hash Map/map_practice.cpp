#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

#include "map_practice.hpp"

/*
 A hash map is a data structure that stores a collection of elements formed by a combination of a key value and a mapped value. 
 Each key value acts as a unique identifier for the element, while the mapped value is the content associated with this key. This is often referred to as a key-value pair.
*/

// Note: A hash map cannot contain elements with duplicate keys. If the initializer list contains elements with duplicate keys, only the first element will be kept.



int main() {
    
// ==== Initialization and Adding elements ==== //

    // std::unordered_map<std::string, int> fruit_codes(
    //     {{"orange", 1402},
    //     {"watermelon", 1105}}
    // );

    std::unordered_map<std::string, int> fruit_codes;

    fruit_codes.insert({"orange", 1402});
    fruit_codes.insert({"watermelon", 1105});
    fruit_codes.insert({"watermelon", 2222});

    // Normally, [] is used to access existing elements in the hash map. 
    // However, if the key specified inside [] does not match the key of any element in the container, the function inserts a new element with that key.
    // From there, a mapped value can be assigned to the new element.
    fruit_codes["apple"] = 4444;

    ShowMapInfo(fruit_codes);

// ==== Removing elements ==== // 
    
    // When .erase() is used this way, it returns 1 if an element was successfully erased, and 0 otherwise.
    std::cout << fruit_codes.erase("orange") << std::endl;

    ShowMapInfo(fruit_codes);

// ==== Checking for elements ==== // 

    if (fruit_codes.count("orange")) {
        std::cout << "includes orange\n";
    } else {
        std::cout << "does not include orange\n";
    }

// ==== Accessing elements ==== //

    std::cout << fruit_codes["watermelon"] << "\n";
    std::cout << fruit_codes["orange"] << "\n";
    ShowMapInfo(fruit_codes);
    
    // The [] operator will insert a new element into the hash map if the provided argument does not match the key of any element in the container. 
    // To avoid this behavior, use the .at() method instead of []. .at() will throw an out_of_range exception if there is no match:
    std::cout << fruit_codes.at("watermelon") << "\n";
    // std::cout << fruit_codes.at("orange") << "\n";

// ==== Iterating through maps ==== //

    // see map_practice.hpp for this one. //

// ==== Other methods ==== //
    // fruit_codes.size();
    // fruit_codes.empty();

// ==== Ordered vs. Unordered Hash Maps ==== //

    // Note: Only use map when you need to store elements in a sorted fashion. Otherwise use unordered_map because it’s generally faster.

}