#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include "Warrior.h"
#include "MagicalEntity.h"
//Here we are using multiple inheritance 
//spellBade inherits from warrior and magical entity

class Spellblade:public Warrior, public MagicalEntity{
    public: 
    Spellblade(string name, int hea, int power, int rating, int pool, int spell);
    int calculateHybridDamage();
};








#endif