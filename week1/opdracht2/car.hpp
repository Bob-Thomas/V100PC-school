//
// Created by smart on 4/24/2016.
//

#ifndef SCHOOL_CAR_H
#define SCHOOL_CAR_H
#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include <iostream>
#include <vector>
#include "windows.h"

class car {
    private:
        int x, y;
        COLORREF color;
        window &w;
    public:
        car(window &w, int x, int y);
        car(window &w, int x, int y, COLORREF color);

        void print();
};

#endif //SCHOOL_CAR_H
