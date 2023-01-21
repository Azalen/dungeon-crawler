#ifndef LEVEL_H
#define LEVEL_H

#include "tile.h"
#include "floor.h"
#include "character.h"

#include <vector>

class Level {

    private:
        std::vector<std::vector<Tile *>> map;
        std::vector<Character *> characters;

    public:
        const int width, height;

        Level(int width, int height) : width(width), height(height) {
            for(int i = 0; i < height; i++){
                std::vector<Tile*> row;
            
                for(int j = 0; j < width; j++){
                    row.emplace_back(new Floor(i,j));
                }

                map.push_back(row);
            }
        }

        ~Level() {
            // TODO
        }

        Tile * getTile(int i, int j) {
            return map[i][j];
        }

        const Tile * getTile(int i, int j) const {
            return map[i][j];
        }

        void placeCharacter(Character * c, int i, int j) {
            map[i][j]->setCharacter(c);
        }

};

#endif