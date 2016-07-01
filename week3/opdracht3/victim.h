#ifndef V1OOPC_VICTIM_H
#define V1OOPC_VICTIM_H

#include "rectangle.hpp"
#include "iostream"

class victim : public rectangle {
    private:
        vector start;
        vector end;
    public:
        bool touched;
        victim( window &w, const vector &start, const vector &end);
        void update() override;
        void interact( drawable & other ) override;
};


#endif //V1OOPC_VICTIM_H