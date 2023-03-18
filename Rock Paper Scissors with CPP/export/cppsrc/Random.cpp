#include <cstddef>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <array>
#include <variant>

namespace Random
{
#include <time.h>
auto randint(auto maximum) {
return rand() % (int)maximum;
}
}