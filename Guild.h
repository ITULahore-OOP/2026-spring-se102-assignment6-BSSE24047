#ifndef GUILD_H
#define GUILD_H

#include <iostream>
#include "Hero.h" //HAS-A relationship

using namespace std;

class Guild {
    private:
    string guildName;
    int memberCount;
    Hero* roster[15];

    public:
    Guild(string guild);
    ~Guild();
    int calculateTotalGuildPower()const;
    void displayGuildStats()const ;
    void operator += (Hero*);
    friend ostream& operator << (ostream& os, Guild& g);
};

#endif 
























