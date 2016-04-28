/// @file

/// 2D integer vector ADT
//
/// This is 2D vector ADT that stores its two components as (signed) integers.
/// The x and y components are public attributes.
/// The appropriate constructors and operators are provided.
#ifndef SCHOOL_VECTOR_H
#define SCHOOL_VECTOR_H


#include <ostream>

class vector {
    public:
        int x; // X integer in the vector
        int y; // Y integer in the vector


        /// default constructor
        //
        /// This constructor does not initialize the x and y attributes.
        vector();

        /// Parametrized constructor
        //
        /// This constructor does initialize the x and y attributes.
        vector(int x, int y);

        /// output operator for a vector value
        //
        /// This operator<< prints a constructor in the format
        /// [x, y] where both values are printed as
        /// decimal values.
        friend std::ostream &operator<<(std::ostream &lhs, const vector &v);

        /// compare two vector values
        //
        /// This operator tests for equality. It returns true
        /// if and only if the x and y of both
        /// operands are equal.
        bool operator==(const vector &v);

        // add a vector to another vector
        //
        /// This operator+ adds a vector value to a vector variable.
        vector operator+(const vector &v);

        // add a vector to another vector
        //
        /// This operator+ adds 2 vectors together
        friend vector operator+(const vector &lv, const vector &hv);

        // substract a vector from another vector
        //
        /// This operator- substracts a vector value from a vector variable.
        vector operator-(const vector &v);

        // substract 2 vectors
        //
        /// This operator- substracts 2 vectors from eachotehr.
        friend vector operator-(const vector &lv, const vector &hv);

        // multiply the vector
        //
        // This operator* mulitplies the given vector by the given int value
        friend vector operator*(const vector &v, const int value);

        // multiply the vector
        //
        // This operator* mulitplies the given vector by the given int value
        friend vector operator*(const int value, const vector &v);

        // divide the vector
        //
        // This operator/ divides the given vector by the given int value
        friend vector operator/(const vector &v, const int value);

        // assign addition with vector
        //
        // Add the given vector to it's own
        vector &operator+=(const vector &hv);

        // assign substract with vector
        //
        // Subtract the given vector from it's own
        vector &operator-=(const vector &hv);

        // assign multiplication with vector
        //
        // Multiply the given vector by the given value
        friend vector &operator*=(vector &v, const int value);

        // assign division with vector
        //
        // Divide the given vector by the given value
        friend vector &operator/=(vector &v, const int value);


};

#endif //SCHOOL_VECTOR_H
