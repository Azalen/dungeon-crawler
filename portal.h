#ifndef PORTAL_H
#define PORTAL_H

#include "tile.h"

class Portal : public Tile {
    private:

    public:
        Portal(int row, int col) : Tile(row, col) {
            texture = "O";
        }
};

#endif