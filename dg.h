#ifndef DUNGEONCRAWLER_H
#define DUNGEONCRAWLER_H

#include "tui.h"

class DungeonCrawler {

    private:
        UI * ui;
        Level * level;

    public:
        DungeonCrawler(UI * ui, Level * level) : ui(ui), level(level) {
            ui->draw(level);
        }

};

#endif