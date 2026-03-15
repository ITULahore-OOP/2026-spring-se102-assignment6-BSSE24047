#include "Spellblade.h"
#include <iostream>
using namespace std;


Spellblade::Spellblade(string name, int hea, int power, int rating, int pool, int spell): Warrior(name,
        rating, hea, power), MagicalEntity(pool, spell){

        }
int Spellblade::calculateHybridDamage(){
    return basePower+spellPower;
}
 

    