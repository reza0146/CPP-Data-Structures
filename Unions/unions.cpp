// #include <iostream>
// #include <string>
// #include <vector>

/*
[From https://learn.microsoft.com/en-us/cpp/cpp/unions?view=msvc-170] CHECK THE EXAMPLES HERE. They are great.

Note1: A union is a user-defined type in which all members share the same memory location. 
This definition means that at any given time, a union can contain no more than one object from its list of members. 

Note2: It also means that no matter how many members a union has, it always uses only enough memory to store the largest member.

Note3: A union can be useful for conserving memory when you have lots of objects and limited memory. However, a union requires extra care to use correctly. 
You're responsible for ensuring that you always access the same member you assigned.
*/

// union Number {
//   short short_value;
//   int int_value;
//   double d_value;
// };

// // The union variable will always occupy 8 bytes of memory equal to the size of its largest member (double in this case).
// int main() {
//   Number a;
//   std::cout << sizeof(a) << "\n";
//   a.short_value = 2; // "a" now holds a value of 2 (2 bytes of the 8 bytes is occupied by value)
//   std::cout << sizeof(a) << "\n";
//   a.d_value = 4; // a now holds a value of 4
//   std::cout << a.short_value << "\n"; // This will output 0. short_value does not exist. Be careful that the compiler does not throw an exeption when this happens.
//   // That's why you need to find a solution to make sure you will never try to access a member that's not been assigned value.
// }

/*
Discriminated union: any code that accesses the union needs to know which member holds the data. The most common solution to this problem is called a discriminated union. 
It encloses the union in a struct, and includes an enum member that indicates the member type currently stored in the union.
*/

// #include <iostream>
// #include <string>
// #include <vector>
// enum NumType {short_type, integer_type, double_type}; \\ This is the discriminator.
// union Number {
//   short short_value;
//   int int_value;
//   double d_value;
// };

// struct NumberStruct{
//   enum NumType type;
//   union Number num_union;
// };


// int main() {
//   NumberStruct a;
//   a.type = short_type;
//   a.num_union.short_value = 2;
  
//   switch (a.type) {
//     case short_type:
//       std::cout << a.num_union.short_value << "\n"; // access the short_value if the type is short_type
//       break;
//     case integer_type:
//       std::cout << a.num_union.int_value << "\n"; // access the short_value if the type is short_type
//       break;
//     case double_type:
//       std::cout << a.num_union.d_value << "\n"; // access the short_value if the type is short_type
//       break;
//   }

// } 

/*
clearly this method needs some level of care. Whenever the union is being assigned a value, the type need to be updated with the matching enum name. 
Also, it is the developer's responsibility to make sure check the type value first and access the correct union variable accordingly.
To avoid such any confusion, it's better to define the union as a private member of a class and provide accessor functions that check the type before accessing.
See the microsoft link for example.
*/

/*
Anonymous union: In the struct definition above, we could define the union inside the struct (or a class) without assignin a name to the union.
This is called an anonymous union and its members can be accessed directly as if they're members of the struct (or class).
*/

// enum NumType {short_type, integer_type, double_type};

// struct NumberStruct{
//   enum NumType type;
//   union 
//   {
//     short short_value;
//     int int_value;
//     double d_value;
//   };
// };


// int main() {
//   NumberStruct a;
//   a.type = short_type;
//   a.short_value = 2; // num_union can be erased.
  
//   switch (a.type) {
//     case short_type:
//       std::cout << a.short_value << "\n"; // num_union can be erased.
//       break;
//     case integer_type:
//       std::cout << a.int_value << "\n"; // num_union can be erased.
//       break;
//     case double_type:
//       std::cout << a.d_value << "\n"; // num_union can be erased.
//       break;
//   }

// } 

/*
[From https://learn.microsoft.com/en-us/cpp/cpp/unions?view=msvc-170] CHECK THE EXAMPLES HERE. They are great.

Note: A union lets you dynamically change the type of the stored value without changing the type of the union variable itself.
For example, you could create a heterogeneous array of MyUnionType, whose elements store different values of different types.

Note: a union cannot contain a nonstatic data member (like vector or string) unless with special treatment discussed in the link above.
If you include such a member in your union, the compiler automatically marks any special member functions that aren't user provided as deleted.
*/

// union A {
//   std::vector<int> vec;
// };

// int main() {
//   A a; // Error: The default contructor of A cannot be referenced -- It is a deleted function. 
// } 

// Another example:

// struct A
// {
//     A() = default;
//     A(int i, const std::string& str) : num(i), name(str) {}

//     int num;
//     std::string name;
//     //...
// };

// union B {
//   A a;
//   int num;
// };

// int main() {
//   B b; // struct a which is a data member of union b has a non static memebr  (std::vector)
  
// }

/*
To see how You need to handle such situation, see the link from microsoft. 
*/
