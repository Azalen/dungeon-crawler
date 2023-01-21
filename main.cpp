#include "dg.h"

int main() {

    Level l(3,3);
    TUI tui;
    DungeonCrawler(&tui, &l);

    return 0;
}