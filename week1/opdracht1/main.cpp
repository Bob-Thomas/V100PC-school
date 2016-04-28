// template
#include "window.hpp"
#include "rectangle.hpp"

int main(int argc, char **argv) {
    window w(128, 64, 2);

    rectangle box(w, 0, 0, 30, 30);
    box.draw();

    rectangle box1(w, 40, 0, 80, 30);
    box1.draw();

    rectangle box2(w, 0, 40, 40, 80);
    box2.draw();


    return 0;
}
