#include <iostream>
#include <string>

void
printGreeting(const std::string& name)
{
  std::cout << "Hello world from " << name << std::endl;
}

int
main()
{
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  printGreeting(name);
  return 0;
}
