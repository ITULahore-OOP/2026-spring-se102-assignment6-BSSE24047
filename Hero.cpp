#include "Hero.h"
#include <iostream>

using namespace std;

Hero::Hero(string name, int hea, int power){
    heroName=name;
    health=hea;
    basePower=power;
}
Hero::~Hero(){
    cout<<"Hero destroyed"<<endl;
}
string Hero::getName()const {
    return heroName;
}
int Hero::getHealth()const {
    return health;
}
int Hero::getPower()const {
    return basePower;
}
void Hero::takeDamage(int damage){
    if (health<=0){
        cout<<"Can not calculate damage value"<<endl;
    }
    else {
        damage-=health;
    }
}
bool Hero::operator>(Hero& h)const {
    if (basePower>h.basePower){
        return true; 
    }
    else {
        return false;
    }
}
int Hero::operator+(Hero& h)const {
    return health+h.health;
}