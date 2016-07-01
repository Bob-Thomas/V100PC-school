#include "victim.h"

victim::victim(window &w, const vector &start, const vector &end) :
        rectangle(w, start, end),
        start(start),
        end(end),
        touched(false) { }

void victim::update() {
    drawable::update();
    if (touched) {
        if (start.x != end.y && start.x != end.x) {
            start.x++;
            start.y++;
            end.x--;
            end.y--;
            rectangle::resize(start, end);
        }
    }
}

void victim::interact(drawable &other) {
    if (this != &other) {
        if (overlaps(other)) {
            touched = true;
        }
    }
    print(std::cout);
    std::cout << "\n";
}