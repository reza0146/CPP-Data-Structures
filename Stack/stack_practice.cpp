#include <iostream>
#include <string>
#include <stack>


/*
The first plate added onto the table is both the bottom and top of the stack. Each plate added becomes the new top of the stack.
 At any point, the only plate that can be removed from the stack is the top one.

Stacks are designed to operate in a Last-In-First-Out context (LIFO), where elements are inserted and extracted only from one end of the container.
*/

// Note: Unlike vectors, stack access is limited to the top element and cannot use index access.

int main() {
    std::stack<std::string> plates;

    plates.push("plate1");
    plates.push("plate2");


    std::cout << plates.top() << std::endl;


    plates.top() = "top plate replaced";

    while (!plates.empty()) {
        std::cout << plates.top() << std::endl;
        plates.pop();
    }

    std::cout << plates.size() << std::endl;

}