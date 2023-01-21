#ifndef TUI_H
#define TUI_H

#include "level.h"
#include "ui.h"

#include <iostream>

using std::cout, std::cin, std::endl;

class TUI : public UI {
    public:
        virtual void draw(Level * level) {
            int n = level->width;
            int m = level->height;

            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cout << level->getTile(i,j)->getTexture() << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
};

#endif