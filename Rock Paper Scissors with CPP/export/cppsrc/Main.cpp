#include "ArrayTools.cpp"
#include "MathTools.cpp"
#include "System.cpp"
#include "Random.cpp"
#include <cstddef>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <array>
#include <variant>

namespace Main
{
#include <time.h>
#include <stdlib.h>
std::vector<ArrayTools::DynamicType> possibleOptions = {ArrayTools::DynamicType((std::any)"Rock"),ArrayTools::DynamicType((std::any)"Paper"),ArrayTools::DynamicType((std::any)"Scissors")};
auto validateMove() {
auto  move =  System::varRead("Enter your move: ");
for (int i = 1; i < arraySize(possibleOptions); i++) {
if (move != possibleOptions[i-MathTools::one] && i == ArrayTools::arraySize(possibleOptions) - 1 ) {
} else {
break;
}
}
return move;
}
int main(auto args) {
srand(time(0));
auto  tries =  0;
tries = atoi(std::any_cast<char*>(args[1].varToCast));
for (int i = 0; i < tries; i++) {
auto  move =  validateMove();
while (move == "NULL") {
}
auto  computerMove =  possibleOptions[Random::randint(3) - MathTools::one];
std::cout << "Computer picked: ";
System::varTrace(computerMove);
if ((computerMove == "Scissors"           && move == "Rock") ||           (computerMove == "Rock"           && move == "Paper") ||           (computerMove == "Paper"           && move == "Scissors") ) {
std::cout << "Player is the winner!" << std::endl;
} else if ((computerMove == "Paper"            && move == "Rock") ||            (computerMove == "Scissors"            && move == "Paper") ||            (computerMove == "Rock"            && move == "Scissors") ) {
std::cout << "Computer is the winner!" << std::endl;
}
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