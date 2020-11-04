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