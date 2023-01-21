#ifndef TILE_H
#define TILE_H

#include <string>

class Character;

class Tile {

    protected:
        std::string texture;
        Character * character = nullptr;
        const int row, col;

    public:
        Tile(int row, int col);

        // virtual Tile * onEnter(Tile * fromTile, Character * who);
        // virtual Tile * onLeave(Tile * destTile, Character * who);

        void setCharacter(Character * c);
        Character * getCharacter();

        int getRow() ;
        int getCol();

        bool hasCharacter();

        std::string getTexture();

        bool moveTo(Tile * destTile, Character * who);

};

#endif