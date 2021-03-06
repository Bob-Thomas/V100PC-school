// example:
// declaration of a rectangle object that is contains four line objects

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "window.hpp"

class rectangle {
    private:
        int start_x, start_y, end_x, end_y;
        window &w;
    public:
        rectangle(window &w, int start_x, int start_y, int end_x, int end_y);

        void draw();
};


#endif // RECTANGLE_HPP
