#include <iostream>
#include "Guild.h"
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "Spellblade.h"
using namespace std;

int main(){

Guild myGuild("Legends");
Hero* h1=new Warrior("Thor",120, 80, 15);
Hero* h2=new Knight("Batman",150,50, 90, 20);
Hero* h3=new Spellblade("Merlin", 10, 70, 50,30,75);
//Add heros 
myGuild+=h1;
myGuild+=h2;
myGuild+=h3;

//Test damage
h1->takeDamage(20);
h2->takeDamage(10);

//Test vitality operator 
int vitality=*h1+*h3;
cout<<"Combined Vitality: "<<vitality<<endl;
cout<<endl;
cout<<myGuild;
myGuild.displayGuildStats();
//Test comparison operator

if (*h2>*h1){
    cout<<h2->getName()<<" is stronger than "<<h1->getName()<<endl;
}
else{
    cout<<h1->getName()<<" is stronger than "<<h2->getName()<<endl;
}


    return 0;
}


