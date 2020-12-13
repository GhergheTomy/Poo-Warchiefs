#include <ostream>

class orc {
private:
    std::string name;
    std::string advanced_classes;
    std::string classes;
    strengths x;
    weaknesses y;
    /* string strengths;
    string weakness; */
    std::string tribe;
    int level;
    std::string connection;
    std::string rank;
public:
    //Constructor
    orc(const std::string &name, const std::string &advanced_classes, const std::string &classes /*, const string &strengths,
        const string &weakness */, const std::string &tribe, const int &level, const std::string &connection,
        const std::string &rank) {
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
        this->level = 1;
        this->connection = "NoConnection";
        this->rank = "Captain";
    }

    //Constructor copiere
    orc(const orc &o) {
        this->name = o.name;
        this->advanced_classes = o.advanced_classes;
        this->classes = o.classes;
        this->tribe = o.tribe;
        this->level = o.level;
        this->connection = o.connection;
        this->rank = o.rank;
    }

    //Operator <<
    friend std::ostream &operator<<(std::ostream &os, const orc &orc) {
        os << "name: " << orc.name << " advanced_classes: " << orc.advanced_classes << " classes: " << orc.classes
           << " tribe: " << orc.tribe << " level: " << orc.level
           << " connection: " << orc.connection << " rank: " << orc.rank;
        return os;
    }

//Operatorul =
    orc &operator=(const orc &o) {
        this->name = o.name;
        this->advanced_classes = o.advanced_classes;
        this->classes = o.classes;
        this->tribe = o.tribe;
        this->level = o.level;
        this->connection = o.connection;
        this->rank = o.rank;
        return *this;
    }


    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &name) {
        orc::name = name;
    }

    const std::string &getAdvanced_classes() const {
        return advanced_classes;
    }

    void setAdvanced_classes(const std::string &advanced_classes) {
        orc::advanced_classes = advanced_classes;
    }

    const std::string &getClasses() const {
        return classes;
    }

    void setClasses(const std::string &classes) {
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
    const std::string &getTribe() const {
        return tribe;
    }

    void setTribe(const std::string &tribe) {
        orc::tribe = tribe;
    }

    const int &getLevel() const {
        return level;
    }

    void setLevel(const int &level) {
        orc::level = level;
    }

    const std::string &getConnection() const {
        return connection;
    }

    void setConnection(const std::string &connection) {
        orc::connection = connection;
    }

    const std::string &getRank() const {
        return rank;
    }

    void setRank(const std::string &rank) {
        orc::rank = rank;
    }

//Destructor
    virtual ~orc() {
        std::cout << "Orc:-" << this->name << std::endl;
        std::cout << "    -" << this->advanced_classes << std::endl;
        std::cout << "    -" << this->classes << std::endl;
        /*      cout << "    -" << this->strengths << endl;
              cout << "    -" << this->weakness << endl; */
        std::cout << "    -" << this->tribe << std::endl;
        std::cout << "    -" << this->level << std::endl;
        std::cout << "    -" << this->connection << std::endl;
        std::cout << "    -" << this->rank << std::endl;
        std::cout << "---------->THE ORC HAS BEEN KILLED<----------";
    }
};