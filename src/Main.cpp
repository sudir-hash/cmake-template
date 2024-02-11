#include <iostream>

//  import all the functions from the utilities library

// #include "helpers.hpp"
#include <operators.hpp>
#include <tests.hpp>
#include <helpers.hpp>
int main()
{
    // prettyPrint("Hello World");
    prettyPrint(std::to_string(add(1, 2)));
    prettyPrint(std::to_string(sub(1, 2)));
    test_add();
    test_sub();
    return 0;
}