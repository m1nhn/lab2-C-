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
    static void select(Menu settings);
};
#endif //LL2_MENU_H
