#ifndef FLOOR_H
#define FLOOR_H

#include "tile.h"

class Floor : public Tile {
    private:

    public:
        Floor(int row, int col) : Tile(row, col) {
            texture = ".";
        }
};

#endif