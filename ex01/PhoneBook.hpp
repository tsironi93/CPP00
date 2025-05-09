#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <sys/signal.h>
#include <termios.h>
#include <unistd.h>

#define Res "\033[0m"
#define B "\033[30m"
#define R "\033[31m"
#define G "\033[32m"
#define Y "\033[33m"
#define Blue "\033[34m"
#define M "\033[35m"
#define C "\033[36m"
#define W "\033[37m"
#define Bold "\033[1m"
#define Under "\033[4m"

class PhoneBook {
private:
  Contact contacts[8];
  int count;
  int i;

public:
  PhoneBook();

  void addContact(const Contact &newContact);
  void displayContacts() const;
  int getContactCount() const;
  void displayContactIndex(std::string index) const;
};

#endif // !PHONEBOOK_HPP
