#include "Warrior.h"
#include<iostream>

using namespace std;


Warrior::Warrior(string name, int hea, int power, int rating): Hero(name, hea, power){
    armRating=rating;
}
int Warrior::getArmor(){
    return armRating;
}
int Warrior::calculateEffectiveHealth(){
     return health+ (armRating *2);
  
}
