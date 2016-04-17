// example:
// definition of the functions of a rectangle object

#include "rectangle.hpp"

rectangle::rectangle(window &w, int start_x, int start_y, int end_x, int end_y):
    w(w), start_x(start_x), start_y(start_y), end_x(end_x), end_y(end_y)
{
}

void rectangle::print() {
    for(int i = start_y; i < end_y; ++i) {
        for(int j = start_x; j < end_x; ++j) {
            w.draw(i,j);
        }
    }
}

