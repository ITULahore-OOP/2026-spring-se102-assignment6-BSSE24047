#include "MagicalEntity.h"
#include <iostream>

using namespace std;

MagicalEntity::MagicalEntity(int pool, int spell){
    manaPool=pool;
    spellPower=spell;
}
int MagicalEntity:: getMana()const{
    return manaPool;
}
int MagicalEntity:: getSpellPower()const{
    return spellPower;
}