#include<iostream>
#include <iomanip>
#include <afxres.h>

using namespace std;
class orc {
private:
    string name;
    string advanced_classes;
    string classes;
    /* string strengths;
    string weakness; */
    string tribe;
    int level;
    string connection;
    string rank;
public:
    //Constructor
    orc(const string &name, const string &advanced_classes, const string &classes /*, const string &strengths,
        const string &weakness */, const string &tribe, const int &level, const string &connection,
        const string &rank) {
        this->name = name;
        this->advanced_classes = advanced_classes;
        this->classes = classes;
        /* this->strengths = strengths;
         this->weakness = weakness; */
        this->tribe = tribe;
        this->level = level;
        this->connection = connection;
        this->rank = rank;
    }
//Deafault constructor
    orc() {
        this->name = "NoName";
        this->advanced_classes = "NoAdvancedClasses";
        this->classes = "NoClasses";
        /* this->strengths = "NoStrengths";
        this->weakness = "NoWeakness"; */
        this->tribe = "NoTribe";
        this->level = 0;
        this->connection = "NoConnection";
        this->rank = "NoRank";
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        orc::name = name;
    }

    const string &getAdvanced_classes() const {
        return advanced_classes;
    }

    void setAdvanced_classes(const string &advanced_classes) {
        orc::advanced_classes = advanced_classes;
    }

    const string &getClasses() const {
        return classes;
    }

    void setClasses(const string &classes) {
        orc::classes = classes;
    }

    /* const string &getStrengths() const {
        return strengths;
    }

    void setStrengths(const string &strengths) {
        orc::strengths = strengths;
    }

    const string &getWeakness() const {
        return weakness;
    }

    void setWeakness(const string &weakness) {
        orc::weakness = weakness;
    }
*/
    const string &getTribe() const {
        return tribe;
    }

    void setTribe(const string &tribe) {
        orc::tribe = tribe;
    }

    const int &getLevel() const {
        return level;
    }

    void setLevel(const int &level) {
        orc::level = level;
    }

    const string &getConnection() const {
        return connection;
    }

    void setConnection(const string &connection) {
        orc::connection = connection;
    }

    const string &getRank() const {
        return rank;
    }

    void setRank(const string &rank) {
        orc::rank = rank;
    }
//Destructor
    virtual ~orc() {
        cout << "Orc:-" << this->name << endl;
        cout << "    -" << this->advanced_classes << endl;
        cout << "    -" << this->classes << endl;
        /*      cout << "    -" << this->strengths << endl;
              cout << "    -" << this->weakness << endl; */
        cout << "    -" << this->tribe << endl;
        cout << "    -" << this->level << endl;
        cout << "    -" << this->connection << endl;
        cout << "    -" << this->rank << endl;
        cout<<"---------->THE ORC HAS BEEN KILLED<----------";
    }
};
class beast
{
private:
    string name;
    string element_type;
    string type;

public:
    beast(const string&name,const string &element_type,const  string &type)
    {
        this->name=name;
        this->element_type=element_type;
        this->type=type;
    }
    beast()
    {
        this->name="NoName";
        this->element_type="Common";
        this->type="NoType";
    }
    const string &getname() const
    {
        return name;
    }
    void setname(const  string &name)
    {
        beast::name=name;
    }
    const string &getelement_type() const
    {
        return element_type;
    }
    void setelement_type(const  string &element_type)
    {
        beast::element_type=element_type;
    }
    const string &gettype() const
    {
        return type;
    }
    void settype(const  string &type)
    {
        beast::type=type;
    }

    ~beast()
    {
        std::cout<<"Victory! You killed the beast!" ;
        /* Mom nu am creat toate legaturile dar vreau la asta gen sa fie ca o
        misiune in care sa creasca cu un level si pe langa asta sa fie o probabilitate
        de un procent x in care sa poata primi si o abilitate impotriva lor gen beast proof */
    }
};
class strengths
{
private:
 string immunities;
 string hates;
 string class_traits;
 string bonuses;
public:
    strengths(const string &immunities,const string &hates,const string &class_traits,const string &bonuses)
    {
        this->immunities=immunities;
        this->hates=hates;
        this->class_traits=class_traits;
        this->bonuses=bonuses;
    }
    strengths()
    {
        this->immunities="NoImmunities";
        this->hates="NoHates";
        this->class_traits="NoClassTraits";
        this->bonuses="Bonuses";
    }
    const string &getImmunities() const {
        return immunities;
    }

    void setImmunities(const string &immunities) {
        strengths::immunities=immunities;
    }
    const string &getHates() const {
        return hates;
    }

    void setHates(const string &hates) {
        strengths::hates=hates;
    }
    const string &getClassTraits() const {
        return class_traits;
    }

    void setClassTraits(const string &class_traits) {
        strengths::class_traits=class_traits;
    }
    const string &getBonuses() const {
        return bonuses;
    }

    void setBonuses(const string &bonuses) {
        strengths::bonuses;
    }
};
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
void clean_console()
{
#ifdef _WIN32
#define CLEAR system(" cls ");
#else
#define CLEAR system("clear");
#endif
}
void create_orc()
{
    string name1,classes1,adv_class,tribe1;
    int v,p;
    cout<<"Name:";
    cin>>name1;

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
clean_console();
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
clean_console();
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
clean_console();
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
    switch(v)
    {
        case 1:
            clean_console();
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
    //Am cautat rezolvare la linia de mai sus mult daca sti cum as putea rezolva sunt doar urechi.
    //Ce am gasit e doar pentru windows deci nu ajuta ca sa mearga pe orice platforma :)).
    start();
    return 0;
}