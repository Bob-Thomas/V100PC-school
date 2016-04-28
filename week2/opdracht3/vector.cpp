//
// Created by smart on 4/28/2016.
//

#include "vector.h"

vector::vector() { }

vector::vector(int x, int y) : x(x), y(y) { };

std::ostream &operator<<(std::ostream &lhs, const vector &v) {
    return lhs
           << "["
           << v.x
           << ","
           << v.y
           << "]";
}

bool vector::operator==(const vector &v) {
    return (x == v.x) && (y == v.y);
}

vector vector::operator+(const vector &v) {
    return vector(x + v.x, y + v.y);
}

vector operator+(const vector &lv, const vector &hv) {
    return vector(lv.x + hv.x, lv.y + hv.y);
}

vector vector::operator-(const vector &v) {
    return vector(x - v.x, y - v.y);
}

vector operator-(const vector &lv, const vector &hv) {
    return vector(lv.x - hv.x, lv.y - hv.y);
}

vector operator*(const int value, const vector &v) {
    return vector(v.x * value, v.y * value);
}

vector operator*(const vector &v, const int value) {
    return vector(v.x * value, v.y * value);
}

vector operator/(const vector &v, const int value) {
    return vector(v.x / value, v.y / value);
}

vector &vector::operator+=(const vector &v) {
    x += v.x;
    y += v.y;
    return *this;
}

vector &vector::operator-=(const vector &v) {
    x -= v.x;
    y -= v.y;
    return *this;
}

vector &operator*=(vector &v, const int value) {
    v.x *= value;
    v.y *= value;
    return v;
}

vector &operator/=(vector &v, const int value) {
    v.x /= value;
    v.y /= value;
    return v;
}




