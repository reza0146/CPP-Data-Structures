/*
Structures can be used to store a collection of variables with different data types together. Similar to vectors and arrays, but their elements can be of different data types.
*/

// #include <string>
// #include <iostream>
// #include <vector>
// This decleration can be moved into a header file.
// struct Person { 
//   std::string name;
//   int age;
//   std::string address;
//   char sex;
// };

/*
When declaring a struct, you can assign DEFAULT values to data members.
*/

// struct Person { 
//   std::string name = "unknown Name"; 
//   int age = 20;
//   std::string address = "Vancouver";
//   char sex = 'M';
// };

/*
Structs can have function members, too.
*/

// #include <string>
// #include <iostream>
// #include <vector>
// struct Person { 
//   //Data Members
//   std::string name;
//   int age;
//   std::string address;
//   char sex;

//   // Function Members
//   std::string print_person_info() {
//     std::string info;
//     info += name + "\n";
//     info += std::to_string(age) + "\n";
//     info += address + "\n";
//     info += sex + "\n";
//     return info;
//   }

// };

/*
The struct keyword when declaring (or initializing) a struct variable is OPTIONAL in C++ but mandatory in C.
struct Person reza = {"R Partovi", 27}; 
*/

// int main() {

/*
Another way to declare and then initializing a struct variable.
*/

  // Person alex;
  // reza.address = "Vancouver";
  // reza.age = 30;
  // reza.name = "AP";
  // reza.sex = 'M';

  // std::cout << alex.print_person_info();

  // std::cout << alex.address << "\n";
  // std::cout << alex.age << "\n";
  // std::cout << alex.name << "\n";
  // std::cout << alex.sex << "\n";
  
/*
You can have an array or vector of structures:
*/
 
  // Person arr_person[10];

  // Filling all the 10 struct elements in the array with the same info.
  // for (auto it = std::begin(arr_person); it != std::end(arr_person); it++) {
  //   it->name = "Marry"; // "it" is a pointer to a struct
  //   it->address = "Vancouver";
  //   it->age = 30;
  //   it->sex = 'F';
  // }

  // Another way to iterate through the array of structures:
  // for (int i = 0; i < (sizeof(arr_person)/sizeof(arr_person[0])); i++) {
  //   arr_person[i].name = "Marry"; // it is a pointer to a struct
  //   arr_person[i].address = "Vancouver";
  //   arr_person[i].age = 30;
  //   arr_person[i].sex = 'F';
  // }

  // std::cout << arr_person[9].address << "\n";

/*
Structure pointer: we can have a pointer to a strucure. If we have a pointer to structure, members are accessed using arrow ( -> ) operator instead of the dot (.) operator.
*/

  // Person alex = {"alex", 28, "New York", 'M'};
  // // A pointer to struct variable, alex
  // Person* alex_p = &alex;
  // std::cout << alex_p->address << "\n";

/*
  Note: In C++, a structure is the same as a class except for a few differences. 
  The most important of them is security. 
  A Structure is not secure and cannot hide its implementation details from the end user while a class is secure and can hide its programming and designing details.
  It's possible to have structures of strucutres: see here: https://www.geeksforgeeks.org/cpp-pointer-to-structure/
*/


 
// }