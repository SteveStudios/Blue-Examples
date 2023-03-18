#include "Strings.cpp"
#include "System.cpp"
#include <cstddef>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <array>
#include <variant>

namespace Main
{
int main() {
auto  thename =  System::varRead("Enter your name: ");
System::varTrace(Strings::stringSub(thename,0,1));
}
}
int main(int argc, char* argv[])
{
Main::main();
}