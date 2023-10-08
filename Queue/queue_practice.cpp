#include <iostream>
#include <string>
#include <queue>

/*
 The first person to get into the line is both at the front and back of the line. 
 As more people arrive, each new person becomes the new back of the line. 
 When a ticket is served, the person at the front of the line will leave the queue.

Queues are designed to operate in a First-In-First-Out context (FIFO), where elements are inserted into one end of the container and extracted from the other.
*/

// Note: Unlike vectors, queue access is limited to the front and back elements.


int main() {

    std::queue<std::string> line;

    line.push("Reza");
    line.push("Goli");
    line.push("Ali");

    std::cout << line.front() << std::endl;
    std::cout << line.back() << std::endl;

    line.pop();
    line.front() = "Amir";

    while (!line.empty()) {
        std::cout << line.front() << std::endl;
        line.pop();
    }



}