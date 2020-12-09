#include<iostream>
#include<SFML/Audio.hpp>
#include <iomanip>
#include <vector>
#ifdef _WIN32
#define CLEAR system(" cls ");
#else
#define CLEAR system("clear");
#endif

#include "classstrengths.h"
#include "classweakness.h"
#include "clasaorc.h"
#include "beast.h"

void create_orc()
{
    std::string name1,classes1,adv_class,tribe1;
    int v;
    std::cout<<"Name:";
    std::cin>>name1;
CLEAR
    std::cout<<"Classes:1-Archer"<<std::endl;
    std::cout<<"        2-Defender"<<std::endl;
    std::cout<<"        3-Hunter"<<std::endl;
    std::cout<<"        4-Olog-Kai"<<std::endl;
    std::cout<<"        5-Savages"<<std::endl;
    std::cout<<"        6-Warriors"<<std::endl;
    std::cout<<"What class do you choose?-";
    std::cin>>v;
    switch (v) {
        case 1:
            classes1 = "Archer";
            break;
        case 2:
            classes1 = "Defender";
            break;
        case 3:
            classes1 = "Hunter";
            break;
        case 4:
            classes1 = "Olog-Kai";
            break;
        case 5:
            classes1 = "Savages";
            break;
        case 6:
            classes1 = "Warriors";
            break;
        default:
            break;
    }
CLEAR
    std::cout<<"Advanced Classes:1 -Assasin"<<std::endl;
    std::cout<<"                 2 -Beast Master"<<std::endl;
    std::cout<<"                 3 -Berseker"<<std::endl;
    std::cout<<"                 4 -Commander"<<std::endl;
    std::cout<<"                 5 -Destroier"<<std::endl;
    std::cout<<"                 6 -Marksman"<<std::endl;
    std::cout<<"                 7 -Tank"<<std::endl;
    std::cout<<"                 8 -Tracker"<<std::endl;
    std::cout<<"                 9 -Trickster"<<std::endl;
    std::cout<<"                 10-Slayer"<<std::endl;
    std::cout<<"What advanced class do you choose?-";

    v=0;
    std::cin>>v;
    switch (v) {
        case 1:
            adv_class = "Assasin";
            break;
        case 2:
            adv_class = "Beast Master";
            break;
        case 3:
            adv_class = "Berseker";
            break;
        case 4:
            adv_class = "Commander";
            break;
        case 5:
            adv_class = "Destroier";
            break;
        case 6:
            adv_class = "Marksman";
            break;
        case 7:
            adv_class = "Tank";
            break;
        case 8:
            adv_class = "Tracker";
            break;
        case 9:
            adv_class = "Trickster";
            break;
        case 10:
            adv_class = "Slayer";
            break;
        default:
            break;
    }
CLEAR
    std::cout<<"Tribe:1-Dark Tribe"<<std::endl;
    std::cout<<"      2-Feral Tribe"<<std::endl;
    std::cout<<"      3-Machine Tribe"<<std::endl;
    std::cout<<"      4-Marauder Tribe"<<std::endl;
    std::cout<<"      5-Mystic Tribe"<<std::endl;
    std::cout<<"      6-Teror Tribe"<<std::endl;
    std::cout<<"      7-Warmonger Tribe"<<std::endl;
    std::cout<<"What tribe do you choose?-";
    std::cin>>v;
    switch (v) {
        case 1:
            tribe1 = "Dark Tribe";
            break;
        case 2:
            tribe1 = "Feral Tribe";
            break;
        case 3:
            tribe1 = "Machine Tribe";
            break;
        case 4:
            tribe1 = "Marauder Tribe";
            break;
        case 5:
            tribe1 = "Mystic Tribe";
            break;
        case 6:
            tribe1 = "Teror Tribe";
            break;
        case 7:
            tribe1 = "Warmonger Tribe";
            break;
        default:
            break;
    }
CLEAR
orc prime(name1,adv_class,classes1,tribe1,1,"none","captain");

}
int start()
{
    int v=0;
    std::cout<<std::setw(25);
    std::cout<<"Who can be the overlord?"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::setw(0);
    std::cout<<"1-Start Game"<<std::endl;
    std::cout<<"2-Exit"<<std::endl;
    std::cout<<std::setw(25);
    std::cout<<"What do you choose now?-";
    std::cin>>v;
    CLEAR
    switch(v)
    {
        case 1:
create_orc();
            break;
        case 2:
            return 0;
        default:
            break;
    }
    return 0;
}
int main()
{
    //orc DeanDegenerate("DeanDegenerate","slayer","savage","dark-tribe",59,"none","none");
    //create_orc();
    sf::Music music;
    if (!music.openFromFile("music.wav"))
        return -1; // error
    music.play();
    start();
    return 0;


}