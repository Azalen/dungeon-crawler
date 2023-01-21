#include "tile.h"
#include "character.h"

Tile::Tile(int row, int col) : row(row), col(col) {
    
}


void Tile::setCharacter(Character *c)
{
    character = c;
}
Character *Tile::getCharacter()
{
    return character;
}

int Tile::getRow() { return row; }
int Tile::getCol() { return col; }

bool Tile::hasCharacter()
{
    if (character != nullptr)
        return true;
    return false;
}

std::string Tile::getTexture()
{
    if (character != nullptr)
        return character->getTexture();
    return texture;
}

bool Tile::moveTo(Tile *destTile, Character *who)
{
    if (true)
    {
        destTile->setCharacter(who);
        this->setCharacter(nullptr);
        character->setTile(destTile);
        return true;
    }
    return false;
}