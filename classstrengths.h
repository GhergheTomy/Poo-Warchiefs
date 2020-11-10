class strengths
{
private:
    vector<string> immunities;
    vector<string> hates;
    vector<string> class_traits;
    vector<string> bonuses;
public:
    strengths(const string &immunities,const string &hates,const string &class_traits,const string &bonuses)
    {
        this->immunities.push_back(immunities);
        this->hates.push_back(hates);
        this->class_traits.push_back(class_traits);
        this->bonuses.push_back(bonuses);
    }
    strengths()
    {
        this->immunities.push_back("NoImmunities");
        this->hates.push_back("NoHates");
        this->class_traits.push_back("NoClassTraits");
        this->bonuses.push_back("Bonuses");
    }
    const vector<string> &getImmunities() const {
        return immunities;
    }

    void setImmunities(const string &immunities) {
        strengths::immunities.push_back(immunities);
    }
    const vector<string> &getHates() const {
        return hates;
    }

    void setHates(const string &hates) {
        strengths::hates.push_back(hates);
    }
    const vector<string> &getClassTraits() const {
        return class_traits;
    }

    void setClassTraits(const string &class_traits) {
        strengths::class_traits.push_back(class_traits);
    }
    const vector<string> &getBonuses() const {
        return bonuses;
    }

    void setBonuses(const string &bonuses) {
        strengths::bonuses.push_back(bonuses);
    }
};