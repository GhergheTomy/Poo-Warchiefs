class beast {
private:
    std::string name;
    std::string element_type;
    int level;

    friend class beast_factory;

public:

    beast(const std::string &name, const std::string &element_type, const int &level) {
        this->name = name;
        this->element_type = element_type;
        this->level = level;
    }

    beast() {
        this->name = "NoName";
        this->element_type = "Common";
        this->level = 0;
    }

    beast(const beast &b) {
        this->name = b.name;
        this->element_type = b.element_type;
        this->level = b.level;
    }

    const std::string &getname() const {
        return name;
    }

    void setname(const std::string &name) {
        beast::name = name;
    }

    const std::string &getelement_type() const {
        return element_type;
    }

    void setelement_type(const std::string &element_type) {
        beast::element_type = element_type;
    }

    const int &getlevel() const {
        return level;
    }

    void setlevel(const int &level) {
        beast::level = level;
    }

    ~beast() {
        std::cout << "Victory! You killed the beast!";
        /* Mom nu am creat toate legaturile dar vreau la asta gen sa fie ca o
        misiune in care sa creasca cu un level si pe langa asta sa fie o probabilitate
        de un procent x in care sa poata primi si o abilitate impotriva lor gen beast proof */
    }
};

class beast_factory {
public:
    static beast caragour_easy() { return beast("Caragour", "Noraml", 1 + std::rand() % (5 - 1 + 1)); }

    static beast dragon_easy() { return beast("Dragon", "Noraml", 1 + std::rand() % (5 - 1 + 1)); }

    static beast graug_easy() { return beast("Graug", "Noraml", 1 + std::rand() % (5 - 1 + 1)); }

    static beast ghuls_easy() { return beast("Ghuls", "Noraml", 1 + std::rand() % (5 - 1 + 1)); }

    static beast caragour_medium() { return beast("Caragour", "Ice", 5 + std::rand() % (15 - 5 + 1)); }

    static beast dragon_medium() { return beast("Dragon", "Ice", 5 + std::rand() % (15 - 5 + 1)); }

    static beast graug_medium() { return beast("Graug", "Ice", 5 + std::rand() % (15 - 5 + 1)); }

    static beast ghuls_medium() { return beast("Ghuls", "Ice", 5 + std::rand() % (15 - 5 + 1)); }

    static beast caragour_hard() { return beast("Caragour", "Fire", 15 + std::rand() % (35 - 15 + 1)); }

    static beast dragon_hard() { return beast("Dragon", "Fire", 15 + std::rand() % (35 - 15 + 1)); }

    static beast graug_hard() { return beast("Graug", "Fire", 15 + std::rand() % (35 - 15 + 1)); }

    static beast ghuls_hard() { return beast("Ghuls", "Fire", 15 + std::rand() % (35 - 15 + 1)); }

    static beast caragour_legendary() { return beast("Caragour", "Curse", 35 + std::rand() % (60 - 35 + 1)); }

    static beast dragon_legendary() { return beast("Daragour", "Curse", 35 + std::rand() % (60 - 35 + 1)); }

    static beast graug_legendary() { return beast("Graug", "Curse", 35 + std::rand() % (60 - 35 + 1)); }
};