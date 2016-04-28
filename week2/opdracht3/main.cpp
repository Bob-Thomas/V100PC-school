#include "ostream"
#include "catch_with_main.hpp"
#include "vector.h"

TEST_CASE("constructor, two_parameters") {
    vector v(3, 4);
    std::stringstream s;
    s << v;
    REQUIRE(s.str() == "[3,4]");
}

TEST_CASE("add") {
    vector v(3, 4);
    v =  v + vector(3, 4);
    REQUIRE(v == vector(6, 8));
}

TEST_CASE("add assign") {
    vector v(3, 4);
    v += vector(3, 4);
    REQUIRE(v == vector(6, 8));
}

TEST_CASE("substract") {
    vector v(6, 8);
    v =  v - vector(3, 4);
    REQUIRE(v == vector(3, 4));
}

TEST_CASE("subtract assign") {
    vector v(6, 8);
    v -= vector(3, 4);
    REQUIRE(v == vector(3, 4));
}

TEST_CASE("multiply") {
    vector v(3, 4);
    v  = v * 2;
    REQUIRE(v == vector(6, 8));
}

TEST_CASE("multiply assign") {
    vector v(3, 4);
    v *= 2;
    REQUIRE(v == vector(6, 8));
}

TEST_CASE("divide") {
    vector v(10, 10);
    v = v / 2;
    REQUIRE(v == vector(5, 5));
}

TEST_CASE("divide assign") {
    vector v(10, 10);
    v /= 2;
    REQUIRE(v == vector(5, 5));
}