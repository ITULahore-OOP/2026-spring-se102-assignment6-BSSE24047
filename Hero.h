#ifndef HERO_H
#define HERO_H
#include <iostream>
using namespace std;

class Hero {
    protected:
    string heroName;
    int health;
    int basePower;

    public:
    Hero(string name,int hea,int power);
    ~Hero();
    string getName()const ;
    int getHealth()const ;
    int getPower()const ;
    void takeDamage(int damage);
    bool operator>(Hero& h)const ;
    int operator +(Hero& h)const ;


};
#endif