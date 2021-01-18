#include<iostream>
#include<SFML/Audio.hpp>
#include <iomanip>
#include <fstream>
#include <random>
//std::ifstream s("strengths.in");
//std::ifstream w("weakness.in");
//std::ifstream n("name.in");
#include <vector>
//O sa fac grafica si dupa nu o sa imi mai trebuiasca il las momentan asa.
#ifdef _WIN32
#define CLEAR system(" cls ");
#else
#define CLEAR system("clear");
#endif

#include "classstrengths.h"
#include "classweakness.h"
#include "clasaorc.h"
#include "beast.h"

void create_orc() {
    std::string name1, classes1, adv_class, tribe1;
    int v;
    std::cout << "Name:";
    std::cin >> name1;
    CLEAR
    std::cout << "Classes:1-Archer" << std::endl;
    std::cout << "        2-Defender" << std::endl;
    std::cout << "        3-Hunter" << std::endl;
    std::cout << "        4-Olog-Kai" << std::endl;
    std::cout << "        5-Savages" << std::endl;
    std::cout << "        6-Warriors" << std::endl;
    std::cout << "What class do you choose?-";
    std::cin >> v;
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
    std::cout << "Advanced Classes:1 -Assasin" << std::endl;
    std::cout << "                 2 -Beast Master" << std::endl;
    std::cout << "                 3 -Berseker" << std::endl;
    std::cout << "                 4 -Commander" << std::endl;
    std::cout << "                 5 -Destroier" << std::endl;
    std::cout << "                 6 -Marksman" << std::endl;
    std::cout << "                 7 -Tank" << std::endl;
    std::cout << "                 8 -Tracker" << std::endl;
    std::cout << "                 9 -Trickster" << std::endl;
    std::cout << "                 10-Slayer" << std::endl;
    std::cout << "What advanced class do you choose?-";

    v = 0;
    std::cin >> v;
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
    std::cout << "Tribe:1-Dark Tribe" << std::endl;
    std::cout << "      2-Feral Tribe" << std::endl;
    std::cout << "      3-Machine Tribe" << std::endl;
    std::cout << "      4-Marauder Tribe" << std::endl;
    std::cout << "      5-Mystic Tribe" << std::endl;
    std::cout << "      6-Teror Tribe" << std::endl;
    std::cout << "      7-Warmonger Tribe" << std::endl;
    std::cout << "What tribe do you choose?-";
    std::cin >> v;
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
            tribe1 = "Terror Tribe";
            break;
        case 7:
            tribe1 = "Warmonger Tribe";
            break;
        default:
            break;
    }
    CLEAR
    orc prime(name1, adv_class, classes1, tribe1, 1, "none", "captain");

    std::cout << "Try kill a beast for level and ability?" << std::endl;
    std::cout << "You have 4 choices" << std::endl;
    std::cout
            << "1. You can do it in an easy way but get just 1 level up. If you can do it; or else you will get fucked."
            << std::endl;
    std::cout
            << "2. Not only is there a 20% chance of getting a new ability, but you will also get 1 level up. However, the enemies will be much stronger."
            << std::endl;
    std::cout
            << "3. Not only is there a 50% chance of getting a new ability, but also a 15% chance of getting 2 levels up. The enemies are stronger than ever.";
    std::cout
            << "4. You will get a new ability and there is a 40% chance to get 2 levels up. But be aware that only the strongest got the chance to tell the story of that day."
            << std::endl;
    std::cout << "What will your choice be?-" << std::endl;
    std::cin >> v;
    int pos = 1;
    beast one;
    srand(time(NULL));
    switch (v) {
        case 1:
            pos = 1 + rand() % 4;
            switch (pos) {
                case 1:
                     one = beast_factory::caragour_easy();
                    break;
                case 2:
                    one = beast_factory::dragon_easy();
                    break;
                case 3:
                    one = beast_factory::graug_easy();
                    break;
                case 4:
                    one = beast_factory::ghuls_easy();
                    break;
                default:
                    break;
            }
            break;
        case 2:
            pos = 1 + rand() % 4 ;
            switch (pos) {
                case 1:
                    one = beast_factory::caragour_medium();
                    break;
                case 2:
                    one = beast_factory::dragon_medium();
                    break;
                case 3:
                    one = beast_factory::graug_medium();
                    break;
                case 4:
                    one = beast_factory::ghuls_medium();
                    break;
                default:
                    break;
            }
            break;
        case 3:
            pos = 1 + rand() % 4;
            switch (pos) {
                case 1:
                    one = beast_factory::caragour_hard();
                    break;
                case 2:
                    one = beast_factory::dragon_hard();
                    break;
                case 3:
                    one = beast_factory::graug_hard();
                    break;
                case 4:
                    one = beast_factory::ghuls_hard();
                    break;
                default:
                    break;
            }
            break;
        case 4:
            pos = 1 + rand() % 3;
            switch (pos) {
                case 1:
                    one = beast_factory::caragour_legendary();
                    break;
                case 2:
                    one = beast_factory::dragon_legendary();
                    break;
                case 3:
                    one = beast_factory::graug_legendary();
                    break;
                default:
                    break;
            }
            break;
        default:
            break;

    }
    prime.setLevel(prime.getLevel()+1);
}

int start() {
    int v = 0;
    while (v != 2) {
        std::cout << std::setw(25);
        std::cout << "Who can be the overlord?" << std::endl;
        std::cout << std::endl;
        std::cout << std::setw(0);
        std::cout << "1-Start Game" << std::endl;
        std::cout << "2-Exit" << std::endl;
        std::cout << std::setw(25);
        std::cout << "What do you choose now?-";
        std::cin >> v;
        CLEAR
        switch (v) {
            case 1:
                create_orc();
                break;
            case 2:
                return 0;
            default:
                break;
        }
    }
    return 0;
}

//void orc_create() {
//    int r = rand() % 100 + 1;
////    std::cout<<r;
//    std::vector<std::string> s{"Fire Proof", "Beast Proof", "Poison Proof", "Arrow Proof", "Immune to curse",
//                               "Immune to execution", "Vigilant against stealth", "Enraged by everything",
//                               "Enraged by injury", "Blood Brother", "Enraged by rival", "Enraged by hounded",
//                               "Enraged by vengefull", "Enraged by Drakes", "Enraged by Graugs", "Enraged by Ghuls",
//                               "Enraged by Stealth", "Agile", "No Chance", "Caragor Pack", "Dem Mother",
//                               "Spider Summener", "Rampage", "Flyng Axes", "Shield Slam", "Beast Slayer",
//                               "Poison Weapon", "Gang Hunters", "Gang Hunters Elite", "Giant Slayer", "Cursed Weapon",
//                               "Poison master", "Cursed Master", "Fanatical Gang", "Great Strenghts",
//                               "Epic Graug calll", "Epic Catargor rider", "Drake lure"};
////    Toate tipurile din weeakness sunt puse intr-un vector dar pt fiecare tip se va face un rand in functie de pozitile unde se afla.
//
//    std::vector<std::string> w{};
//    std::cout << s[6];
//}

int main() {
    //orc DeanDegenerate("DeanDegenerate","slayer","savage","dark-tribe",59,"none","none");
    //create_orc();
//    orc_create();
    sf::Music music;
    if (!music.openFromFile("music.wav"))
        return -1; // error
    music.play();
    start();
    return 0;

}