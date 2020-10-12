#include <iostream>

#include "address.h"
#include <list>
int main()
{   std::list<Contact> abc;
    Address a1;
    a1.addContact("ddfdsg","dhshdfbb","5765856","5473245");
    a1.addContact("bhgfnfgn","vjbhhjfb","57683687","586785");
    a1.addContact("bjknkjdnb","jkfbjbfj","585767","968796");
    a1.addContact("bkngknkn","njnjftuhg","8697894758","867857054");
    a1.displayAll();
    a1.removeContact("57683687");
    a1.displayAll();
    std::cout<<"\nFind by prim: "<<a1.findContactByprim("8697894758");
    a1.findContactByName("jkfbjbfj", abc);
    a1.updateContact("5765856","djkkjnv","svnsfjnvj","58789785");
    a1.displayAll();
    return 0;
}
