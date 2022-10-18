#ifndef GAME_H
#define GAME_H
#include <QPushButton>
#include <QMessageBox>
class Game
{
public:
    Game();
    void newGame(QPushButton **buttons);
    void clickOnField(QPushButton **p, int num);
    int checkVictory();
private:
    int field[9];
    int step;
};

#endif // GAME_H
