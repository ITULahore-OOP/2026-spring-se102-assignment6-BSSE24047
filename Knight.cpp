#include "Knight.h"
#include <iostream>

using namespace std; 


Knight::Knight(string name, int hea, int power, int rating, int bonus):
            Warrior(name, hea, power, rating){
                chargeBonus=bonus;
}
int Knight::getChargeBonus(){
    return chargeBonus;
}
int Knight::calculateBurstDamage(){
   return basePower+chargeBonus;
    
}


        