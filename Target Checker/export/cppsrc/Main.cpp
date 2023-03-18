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
auto  target =  "NULL";
int main() {
target =  "cpp";
System::varTrace(target);
}
}
int main(int argc, char* argv[])
{
Main::main();
}