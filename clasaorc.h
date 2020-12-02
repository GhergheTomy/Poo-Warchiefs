class orc {
private:
    string name;
    string advanced_classes;
    string classes;
    strengths x;
    weaknesses y;
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