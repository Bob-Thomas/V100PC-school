#ifndef V1OOPC_WALL_H
#define V1OOPC_WALL_H

#include "window.hpp"
#include "rectangle.hpp"
#include "vector"


class wall : public rectangle {
    private:
        bool filled;
        int update_interval;
        int update_count;
        vector start;
        vector end;

    public:
        wall( window & w, const vector & start, const vector & end, const int update_interval, const vector &bounce);
        void draw() override;
        void update() override;
};


#endif //V1OOPC_WALL_H
