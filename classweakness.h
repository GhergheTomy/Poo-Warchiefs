

class weaknesses {
private:
    std::vector<std::string> mortal_weaknesses;
    std::vector<std::string> vulnerabilities;
    std::vector<std::string> dazed_by;
    std::vector<std::string> hints;
public:
    weaknesses(const std::string &mortal_weaknesses, const std::string &vulnerabilities, const std::string &dazed_by,
               const std::string &hints) {
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

    const std::vector<std::string> &getMortal_weaknesses() const {
        return mortal_weaknesses;
    }

    void setMortal_weaknesses(const std::string &mortal_weaknesses) {
        weaknesses::mortal_weaknesses.push_back(mortal_weaknesses);
    }

    const std::vector<std::string> &getVulnerabilities() const {
        return vulnerabilities;
    }

    void setVulnerabilities(const std::string &vulnerabilities) {
        weaknesses::vulnerabilities.push_back(vulnerabilities);
    }

    const std::vector<std::string> &getDazedBy() const {
        return dazed_by;
    }

    void setDazedBy(const std::string &dazed_by) {
        weaknesses::dazed_by.push_back(dazed_by);
    }

    const std::vector<std::string> &getHints() const {
        return hints;
    }

    void setHints(const std::string &hints) {
        weaknesses::hints.push_back(hints);
    }
};