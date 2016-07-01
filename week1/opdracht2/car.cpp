#include "car.hpp"

car::car(window &w, int x, int y) :
        x(x), y(y), w(w) { }

car::car(window &w, int x, int y, COLORREF color) :
        x(x), y(y), w(w), color(color) { }

void car::print() {
    rectangle base(this->w, this->x, this->y, this->x + 40, this->y + 10);
    circle wheel1(w, this->x + 5, this->y + 10, 5);
    circle wheel2(w, this->x + 34, this->y + 10, 5);
    wheel1.print();
    wheel2.print();

    line roof1(w, this->x, this->y, this->x + 3, this->y - 10);
    line roof2(w, this->x + 3, this->y - 10, this->x + 25, this->y - 10);
    line roof3(w, this->x + 20, this->y - 10, this->x + 28, this->y);
    roof1.print();
    roof2.print();
    roof3.print();
    if (this->color) {
        base.print(this->color);
    } else {
        base.print();
    }

};