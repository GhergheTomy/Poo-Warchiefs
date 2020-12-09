class beast
{
private:
    std::string name;
    std::string element_type;
    std::string type;

public:
    beast(const std::string&name,const std::string &element_type,const  std::string &type)
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
    const std::string &getname() const
    {
        return name;
    }
    void setname(const  std::string &name)
    {
        beast::name=name;
    }
    const std::string &getelement_type() const
    {
        return element_type;
    }
    void setelement_type(const  std::string &element_type)
    {
        beast::element_type=element_type;
    }
    const std::string &gettype() const
    {
        return type;
    }
    void settype(const  std::string &type)
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