#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include "Hero.h" //Inherits from hero 

class Warrior: public Hero { 
    protected:
    int armRating;
     
    public:
    Warrior(string name, int hea, int power, int rating);
    int getArmor();
    int calculateEffectiveHealth();
};









#endif