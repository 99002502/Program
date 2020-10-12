#include <iostream>
#include "contact.h"
#include <list>
#include <iterator>
class Address{
    std::list<Contact> contacts;
    public:
    void addContact(std::string firstname,std::string lastname,std::string primno,std::string alternateno)
    {
        contacts.push_back(Contact(firstname,lastname,primno,alternateno));
    }
    void removeContact(std::string primno)
    {
        std::list<Contact>::iterator iter;
        for(iter=contacts.begin();iter!=contacts.end();++iter)
        {
            if(iter->getprimno()==primno)
                break;
        }
        if(iter!=contacts.end())
        contacts.erase(iter);
    }
void displayAll(){
    std::list<Contact>::iterator iter;
        for(iter=contacts.begin();iter!=contacts.end();++iter)
        {iter->display();}
}
Contact* findContactByprim(std::string primno)
{
    std::list<Contact>::iterator iter;
        for(iter=contacts.begin();iter!=contacts.end();++iter)
        {
            if(iter->getprimno()==primno)
            return &(*iter);
        }
        return nullptr;
}
void findContactByName(std::string name, std::list<Contact>& ref)
{
    std::list<Contact>::iterator iter;
        for(iter=contacts.begin();iter!=contacts.end();++iter)
        {
            if(iter->getfirstname()==name || iter->getlastname()==name)
            {
                contacts.push_back(*iter);
            }
        }
       
}
void updateContact(std::string primno,std::string firstname, std::string lastname, std::string alternateno)
{
    std::list<Contact>::iterator iter;
    for(iter=contacts.begin();iter!=contacts.end();++iter)
    {
        iter->update(firstname,lastname,alternateno);
    }
}
};