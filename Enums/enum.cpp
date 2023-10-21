/*
An enum is mainly used to assign names to integral constants, the names make a program easy to read and maintain.
By default, the compiler assigns value 0 to the first name and goes up from there for following names. 
*/

enum DaysOfWeek {saturday, sunday, monday, tuesday, wednesday, thursday, friday};

/*
But you can assign your own values to names. In this case, any name that is not assigned a value will get the value of its previous name plus one.
Also, you can assign two names the same value.
enum DaysOfWeek {saturday = 0, sunday = 0 , monday, tuesday, wednesday = 10, thursday, friday};

Another state engine related example 
enum State {Running = 1, Idle = 2, Stopped = 3, Failed = 0, Freezed = 0};
*/


#include <iostream>
#include <string>
int main() {

  DaysOfWeek day = sunday;

  // std::cout << "The enum variable day has a value of: " << day << std::endl;

  // switch (day) {
  //   case saturday:
  //     std::cout << "Saturday\n";
  //     break;
  //   case monday:
  //     std::cout << "Monday\n";
  //     break; 
  // }

  // if (day == 0) {
  //   std::cout << "It's weekend\n";
  // } else {
  //   std::cout << "It's weekday\n";
  // }

  // As shown below, the enum names can be used interchangabely as a constant number.
  for (int i =  saturday; i <= friday; i++) {
    std::cout << i << std::endl; 
  }

}