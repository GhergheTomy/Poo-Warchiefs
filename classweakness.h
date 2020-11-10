class weaknesses {
private:
    vector<string> mortal_weaknesses;
    vector<string> vulnerabilities;
    vector<string> dazed_by;
    vector<string> hints;
public:
    weaknesses(const string &mortal_weaknesses, const string &vulnerabilities, const string &dazed_by,
               const string &hints) {
        this->mortal_weaknesses.push_back(mortal_weaknesses);
        this->vulnerabilities.push_back(vulnerabilities);
        this->dazed_by.push_back(dazed_by);
        this->hints.push_back(hints);
    }

    weaknesses() {
        this->mortal_weaknesses.push_back("NoMortalWeaknesses");
        this->vulnerabilities.push_back("NoVulnerabilities");
        this->dazed_by.push_back("NoDazed");
        this->hints.push_back("NoHints");
    }

    const vector<string> &getMortal_weaknesses() const {
        return mortal_weaknesses;
    }

    void setMortal_weaknesses(const string &mortal_weaknesses) {
        weaknesses::mortal_weaknesses.push_back(mortal_weaknesses);
    }

    const vector<string> &getVulnerabilities() const {
        return vulnerabilities;
    }

    void setVulnerabilities(const string &vulnerabilities) {
        weaknesses::vulnerabilities.push_back(vulnerabilities);
    }
    const vector<string> &getDazedBy() const {
        return dazed_by;
    }

    void setDazedBy(const string &dazed_by) {
        weaknesses::dazed_by.push_back(dazed_by);
    }
    const vector<string> &getHints() const {
        return hints;
    }

    void setHints(const string &hints) {
        weaknesses::hints.push_back(hints);
    }
};