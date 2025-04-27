// Print functions declaration
#include <fstream>
#include <iostream>
#include <string>

void print(const std::string& text, std::ofstream& out);
// Output text to file stream

void print(const std::string& text, std::ostream& out = std::cout);
// Output text to output stream (default: std::cout)
