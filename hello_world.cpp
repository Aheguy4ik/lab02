#include <iostream>
#include <string>

// Prints greeting message with the provided name
void
printGreeting(const std::string& name)
{
  std::cout << "Hello world from " << name << std::endl;
}

// Main function - program entry point
int
main()
{
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  printGreeting(name);
  return 0;
}
