#include "wall.h"

wall::wall( window &w, const vector &start, const vector &end, const int update_interval):
        rectangle( w, start, end ),
        update_interval(update_interval),
        start(start),
        end(end),
        filled(true),
        update_count(5)
{}

void wall::update() {
    update_count += 1;

    if(update_count == update_interval) {
        filled = true;
    }

    if(update_count == update_interval * 2) {
        update_count = 0;
        filled = false;
    }
}

void wall::draw() {
    rectangle::draw();
    if(filled) {
        for (int y = start.y; y < end.y; ++y) {
            for (int x = start.x; x < end.x; ++x) {
                w.draw(vector(x, y));
            }
        }
    }
}