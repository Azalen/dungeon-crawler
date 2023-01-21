#include "character.h"
#include "tile.h"

std::string Character::getTexture()
{
    return texture;
}

Tile *Character::getTile() { return tile; }
void Character::setTile(Tile *tile) { this->tile = tile; }