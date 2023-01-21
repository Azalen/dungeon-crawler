#ifndef UI_H
#define UI_H

#include "level.h"

class UI {
    public:
        virtual void draw(Level * level) = 0;
};

#endif