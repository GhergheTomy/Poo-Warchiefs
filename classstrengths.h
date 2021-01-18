class strengths {
private:
    std::vector<std::string> immunities;
    std::vector<std::string> hates;
    std::vector<std::string> class_traits;
    std::vector<std::string> bonuses;
public:
    strengths(const std::string &immunities, const std::string &hates, const std::string &class_traits,
              const std::string &bonuses) {
        this->immunities.push_back(immunities);
        this->hates.push_back(hates);
        this->class_traits.push_back(class_traits);
        this->bonuses.push_back(bonuses);
    }

    strengths() {
        this->immunities.push_back("NoImmunities");
        this->hates.push_back("NoHates");
        this->class_traits.push_back("NoClassTraits");
        this->bonuses.push_back("Bonuses");
    }

    const std::vector<std::string> &getImmunities() const {
        return immunities;
    }

    void setImmunities(const std::string &immunities) {
        strengths::immunities.push_back(immunities);
    }

    const std::vector<std::string> &getHates() const {
        return hates;
    }

    void setHates(const std::string &hates) {
        strengths::hates.push_back(hates);
    }

    const std::vector<std::string> &getClassTraits() const {
        return class_traits;
    }

    void setClassTraits(const std::string &class_traits) {
        strengths::class_traits.push_back(class_traits);
    }

    const std::vector<std::string> &getBonuses() const {
        return bonuses;
    }

    void setBonuses(const std::string &bonuses) {
        strengths::bonuses.push_back(bonuses);
    }
};