#include <iostream>

class Contact {
    std::string m_firstname, m_lastname,m_primno,m_alternateno;
    public:
    Contact():m_firstname(""),m_lastname(""),m_primno(""),m_alternateno("") {}
    Contact(std::string firstname,std::string lastname,std::string primno,std::string alternateno): m_firstname(firstname),m_lastname(lastname),m_primno(primno),m_alternateno(alternateno) {}
    std::string getfirstname()
    {
        return m_firstname;
    }
    std::string getlastname()
    {
        return m_lastname;
    }
    std::string getprimno()
    {
        return m_primno;
    
    }
    std::string getalternateno()
    {
        return m_alternateno;
    }
    friend std::ostream& operator<<(std::ostream& rout,const Contact& rb)
    {
        rout<<"\nFirst name: "<<rb.m_firstname<<"\nLast name: "<<rb.m_lastname<<"\nPrimary No.: "<<rb.m_primno<<"Alternate No.: "<<rb.m_alternateno<<"\n";
        return rout;
    }
    void display(){
        std::cout<<"\nFirst name: "<<m_firstname<<"\nLast name: "<<m_lastname<<"\nPrimary No.: "<<m_primno<<"Alternate No.: "<<m_alternateno<<"\n";
        
    }
    void update(std::string firstname,std::string lastname,std::string alternateno)
    {
        m_firstname=firstname;
        m_lastname=lastname;
        m_alternateno=alternateno;
    }
};