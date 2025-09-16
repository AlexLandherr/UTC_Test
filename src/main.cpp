#include "include/UTC.h"
#include <iostream>
#include <string>

int main() {
    std::string result_string = UTC::UTC_string();
    std::cout << result_string << '\n';

    return 0;
}