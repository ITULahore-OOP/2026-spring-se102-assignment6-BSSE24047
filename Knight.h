#ifndef KNIGHT_H
#define KNIGHT_H


#include "Warrior.h"
#include <iostream>
//Here we are using multilevel inheritance 
//Knight inherits from warrior which inherits from hero
class Knight: public Warrior{
    protected:
    int chargeBonus;

    public:
    Knight(string name, int bonus, int rating, int hea, int power);
    int getChargeBonus();
    int calculateBurstDamage();
};






#endif