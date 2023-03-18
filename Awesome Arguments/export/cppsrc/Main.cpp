#include "ArrayTools.cpp"
#include "MathTools.cpp"
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
int main(auto args) {
for (int i = 2; i < arraySize(args); i++) {
System::varTrace(args[i-MathTools::one]);
}
}
}
int main(int argc, char* argv[])
{
std::vector<ArrayTools::DynamicType> args;
for (int i = 0; i < argc; i++)
{
args.push_back(ArrayTools::DynamicType((std::any)argv[i]));
}
Main::main(args);
}