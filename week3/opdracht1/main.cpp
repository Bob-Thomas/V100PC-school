#include "window.hpp"
#include "line.hpp"
#include "ball.hpp"
#include "wall.h"

int main() {
    window w(vector(128, 64), 2);
    wall top(w, vector(0, 0), vector(123, 4), 5);
    wall right(w, vector(123, 0), vector(127, 59), 5);
    wall bottom(w, vector(4, 59), vector(127, 63), 5);
    wall left(w, vector(0, 4), vector(4, 63), 5);
    ball b(w, vector(50, 20), 9, vector(5, 2));

    drawable *objects[] = {&b, &top, &left, &right, &bottom};

    for (; ;) {
        w.clear();
        for (auto &p : objects) {
            p->draw();
        }
        wait_ms(200);
        for (auto &p : objects) {
            p->update();
        }
        for (auto &p : objects) {
            for (auto &other : objects) {
                p->interact(*other);
            }
        }
    }
}

