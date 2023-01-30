#ifndef WALL_H
#define WALL_H

#include "tile.h"

class Wall : public Tile {
    private:

    public:
        Wall(int row, int col) : Tile(row, col) {
            texture = "X";
        }
};

#endif