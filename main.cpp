#include<iostream>
#include <iomanip>
#include <afxres.h>
#include <vector>
#ifdef _WIN32
#define CLEAR system(" cls ");
#else
#define CLEAR system("clear");
#endif
using namespace std;
#include "clasaorc.h"
#include "beast.h"
#include "classstrenghts.h"

class weaknesses {
private:
    string mortal_weaknesses;
    string vulnerabilities;
    string dazed_by;
    string hints;
public:
    weaknesses(const string &mortal_weaknesses, const string &vulnerabilities, const string &dazed_by,
               const string &hints) {
        this->mortal_weaknesses = mortal_weaknesses;
        this->vulnerabilities = vulnerabilities;
        this->dazed_by = dazed_by;
        this->hints = hints;
    }

    weaknesses() {
        this->mortal_weaknesses = "NoMortalWeaknesses";
        this->vulnerabilities = "NoVulnerabilities";
        this->dazed_by = "NoDazed";
        this->hints = "NoHints";
    }

    const string &getMortal_weaknesses() const {
        return mortal_weaknesses;
    }

    void setMortal_weaknesses(const string &mortal_weaknesses) {
        weaknesses::mortal_weaknesses = mortal_weaknesses;
    }

    const string &getVulnerabilities() const {
        return vulnerabilities;
    }

    void setVulnerabilities(const string &vulnerabilities) {
        weaknesses::vulnerabilities = vulnerabilities;
    }
    const string &getDazedBy() const {
        return dazed_by;
    }

    void setDazedBy(const string &dazed_by) {
        weaknesses::dazed_by = dazed_by;
    }
    const string &getHints() const {
        return hints;
    }

    void setHints(const string &hints) {
        weaknesses::hints = hints;
    }
};
void create_orc()
{
    string name1,classes1,adv_class,tribe1;
    int v,p;
    cout<<"Name:";
    cin>>name1;
CLEAR
    cout<<"Classes:1-Archer"<<endl;
    cout<<"        2-Defender"<<endl;
    cout<<"        3-Hunter"<<endl;
    cout<<"        4-Olog-Kai"<<endl;
    cout<<"        5-Savages"<<endl;
    cout<<"        6-Warriors"<<endl;
    cout<<"What class do you choose?-";
    cin>>v;
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
    cout<<"Advanced Classes:1 -Assasin"<<endl;
    cout<<"                 2 -Beast Master"<<endl;
    cout<<"                 3 -Berseker"<<endl;
    cout<<"                 4 -Commander"<<endl;
    cout<<"                 5 -Destroier"<<endl;
    cout<<"                 6 -Marksman"<<endl;
    cout<<"                 7 -Tank"<<endl;
    cout<<"                 8 -Tracker"<<endl;
    cout<<"                 9 -Trickster"<<endl;
    cout<<"                 10-Slayer"<<endl;
    cout<<"What advanced class do you choose?-";

    v=0;
    cin>>v;
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
    cout<<"Tribe:1-Dark Tribe"<<endl;
    cout<<"      2-Feral Tribe"<<endl;
    cout<<"      3-Machine Tribe"<<endl;
    cout<<"      4-Marauder Tribe"<<endl;
    cout<<"      5-Mystic Tribe"<<endl;
    cout<<"      6-Teror Tribe"<<endl;
    cout<<"      7-Warmonger Tribe"<<endl;
    cout<<"What tribe do you choose?-";
    cin>>v;
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
    cout<<setw(25);
    cout<<"Who can be the overlord?"<<endl;
    cout<<endl;
    cout<<setw(0);
    cout<<"1-Start Game"<<endl;
    cout<<"2-Exit";
    cin>>v;
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
}
int main()
{
    //orc DeanDegenerate("DeanDegenerate","slayer","savage","dark-tribe",59,"none","none");
    //create_orc();
    //PlaySound("music.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
    //---->Am cautat rezolvare la linia de mai sus mult daca sti cum as putea rezolva sunt doar urechi.
    //Ce am gasit e doar pentru windows deci nu ajuta ca sa mearga pe orice platforma :)).
    start();
    return 0;


}