#ifndef CHARACTER_H
#define CHARACTER_H

#include "tile.h"

class Tile;

class Character {

    private:
        std::string texture = "X";
        Tile * tile = nullptr;

    public:
        std::string getTexture();
        Tile * getTile();
        void setTile(Tile * tile);

};

#endif