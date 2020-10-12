#include "contact"
#include "address.h"
#include <gtest/gtest.h>
namespace {

class AddressTest : public ::testing::Test {

protected:
  void SetUp() { 
    contacts.addContact("ddfdsg","dhshdfbb","5765856","5473245");
    contacts.addContact("bhgfnfgn","vjbhhjfb","57683687","586785");
    contacts.addContact("bjknkjdnb","jkfbjbfj","585767","968796");
    contacts.addContact("bkngknkn","njnjftuhg","8697894758","867857054");

  }
 
};

TEST_F(AddressTest, AddContactTest) {
  contacts.addContact("sdgs", "dfdbbx","85587687",,"899870");
  EXPECT_NE(NULL, books.findContactByprim("85587687"));
  EXPECT_EQ("85587687", books.getprimno());
}
TEST_F(AddressTest, RemoveContactTest) {
  accounts.removeContact();
  EXPECT_EQ(NULL, accounts.findBookById("585767"));
  EXPECT_EQ(NULL, accounts.getprimno("585767"));
}





} // namespace*/
