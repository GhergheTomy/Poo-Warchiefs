#include<iostream>
using namespace std;
class orc {
private:
    string name;
    string advanced_classes;
    string classes;
    /* string strengths;
    string weakness; */
    string tribe;
    string level;
    string connection;
    string rank;
public:
    //Constructor
    orc(const string &name, const string &advanced_classes, const string &classes, const string &strengths,
        const string &weakness, const string &tribe, const string &level, const string &connection,
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
        this->level = "NoLevel";
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

    const string &getLevel() const {
        return level;
    }

    void setLevel(const string &level) {
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
        cout<<"---------->THE ORC HAS BEEN ACCEPTED BY THE OVERLORD TO THE FORTRESS<----------"
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




};