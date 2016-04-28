//
// Created by smart on 4/28/2016.
//

#ifndef SCHOOL_VECTOR_H
#define SCHOOL_VECTOR_H

#include <ostream>

class vector {
    public:
        int x;
        int y;

        vector();

        vector(int x, int y);

        friend std::ostream &operator<<(std::ostream &lhs, const vector &v);

        bool operator==(const vector &v);

        vector operator+(const vector &v);

        friend vector operator+(const vector &lv, const vector &hv);

        vector operator-(const vector &v);

        friend vector operator-(const vector &lv, const vector &hv);

        friend vector operator*(const vector &v, const int value);

        friend vector operator*(const int value, const vector &v);

        friend vector operator/(const vector &v, const int value);

        vector &operator+=(const vector &hv);

        vector &operator-=(const vector &hv);

        friend vector &operator*=(vector &v, const int value);

        friend vector &operator/=(vector &v, const int value);


};

#endif //SCHOOL_VECTOR_H
