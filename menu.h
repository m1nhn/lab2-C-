//
// Created by Nguyễn Minh on 26.03.2022.
//

#ifndef LL2_MENU_H
#define LL2_MENU_H
#include "lab2*.h"
using namespace std;

class Menu{
private:
    int Number;
public:
    Menu();
    void setNum(int &num);
    void getNum();
    void select();
};
#endif //LL2_MENU_H
