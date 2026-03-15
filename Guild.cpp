#include "Guild.h"
#include <iostream>

using namespace std;


Guild::Guild(string guild){
    guildName = guild;
    memberCount=0;
    for (int i=0;i<15;i++){
        roster[i]=nullptr;
    }
}
Guild::~Guild(){
    cout<<"The guild "<<guildName<<" has been disbanded!\n";
}

int Guild::calculateTotalGuildPower()const {
    int totalPower=0;
    for(int i=0; i<memberCount;i++){
        totalPower+=roster[i]->getPower();
    }
    return totalPower;
}
void Guild::displayGuildStats()const {
    cout<<"Guild Name: "<<guildName<<endl;
    cout<<"Total Members: "<<memberCount<<"/15"<<endl;
    cout<<"Total Guild Power: "<<calculateTotalGuildPower()<<endl;
    
    }
void Guild:: operator+=(Hero* newHero){
    if (memberCount<15){
    roster[memberCount]=newHero;
    memberCount++;
    }
    else {
        cout<<"Guild is at full capacity!"<<endl;
    }
}
ostream& operator << (ostream& os, Guild& g){
    os<<"Guild: "<<g.guildName<<endl;
    os<<"Members: "<<g.memberCount<<endl;
    for(int i=0;i<g.memberCount;i++){
        os<<"- "<<g.roster[i]->getName()<<"( Power: "<<g.roster[i]->getPower()<<") "<<endl;
    }
    return os;
}

