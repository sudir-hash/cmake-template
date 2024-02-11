
#include <operators.hpp>
#include "tests.hpp"
#include <cassert>

void test_add()
{
    assert(add(1, 2) == 3);
    assert(add(0, 0) == 0);
    assert(add(-1, -1) == -2);
    assert(add(1, -1) == 0);
    assert(add(1, 0) == 1);
    assert(add(0, 1) == 1);
}

void test_sub()
{
    assert(sub(1, 2) == -1);
    assert(sub(0, 0) == 0);
    assert(sub(-1, -1) == 0);
    assert(sub(1, -1) == 2);
    assert(sub(1, 0) == 1);
    assert(sub(0, 1) == -1);
}