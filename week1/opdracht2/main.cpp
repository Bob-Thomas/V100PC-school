// template
#include "window.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "car.hpp"
#include "windows.h"

int main(int argc, char **argv) {
    window w(300, 300, 2);

    COLORREF kairu = RGB(255, 153, 255);
    COLORREF red = RGB(255, 0, 0);
    COLORREF green = RGB(0, 255, 0);
    COLORREF blue = RGB(0, 0, 255);

    car car_one(w, 40, 20, kairu);
    car_one.print();

    car car_two(w, 90, 20, red);
    car_two.print();

    car car_three(w, 40, 90, blue);
    car_three.print();

    car car_four(w, 90, 90, green);
    car_four.print();
    return 0;
}
