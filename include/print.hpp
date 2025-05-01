//Print functions declaration
#include <fstream>
#include <iostream>
#include <string>

void print(const std::string& text, std::ofstream& out);
// Output text to stream (modified in master)
void print(const std::string& text, std::ostream& out = std::cout);

