
#include "./Contact.hpp"
#include "./PhoneBook.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

static std::string safe_read() {
  std::string input;

  while (!std::getline(std::cin, input))
    if (std::cin.eof()) {
      std::cin.clear();
      clearerr(stdin);
    }
  return input;
}

bool isDigitsOnly(const std::string &str) {
  return !str.empty() && std::all_of(str.begin(), str.end(), ::isdigit);
}

static std::string read_input(const std::string &promt, bool flag) {
  std::string temp;

  std::cout << C << Bold << promt;
  temp = safe_read();
  if (temp.empty()) {
    std::cout << Bold << R << "This field can not be empty!" << Res
              << std::endl;
    return read_input(promt, flag);
  }
  if (flag)
    if (!isDigitsOnly(temp)) {
      std::cout << Bold << R
                << "This field needs to be numerical without spaces" << Res
                << std::endl;
      return read_input(promt, flag);
    }
  return temp;
}

static void add_contact(PhoneBook *phoneBook) {

  std::string temp;
  Contact contact;

  std::cout << C << Bold << std::endl;
  contact.setName(read_input("first name:\t", false));
  contact.setLastName(read_input("last name:\t", false));
  contact.setNickname(read_input("nickname:\t", false));
  contact.setPhoneNum(read_input("phonenumber:\t", true));
  contact.setDarkestSecret(read_input("darkest secret:\t", false));
  std::cout << Res << std::endl;
  phoneBook->addContact(contact);
}

static void displayIndex(PhoneBook *phoneBook) {
  std::string input;

  std::cout << G << Bold
            << "Enter the index of the contact you would like to see" << Res
            << std::endl;
  std::cout << C << "~~> " << Res;
  input = safe_read();
  if (!isDigitsOnly(input))
    return;
  phoneBook->displayContactIndex(input);
  std::cout << std::endl;
}

int main(int ac, char **av) {

  PhoneBook phoneBook;
  std::string input;

  (void)av;
  if (ac != 1) {
    std::cout << R << Bold << "This program doesnt take parameters!"
              << std::endl;
    return 1;
  }
  std::cout << Y << Bold << "\n\t\tWELCOME\n" << Res << std::endl;
  std::cout << G << "Valid commands : ADD, SEARCH, EXIT\n" << Res << std::endl;
  while ("malaka") {
    std::cout << C << "~~> " << Res;
    input = safe_read();
    if (input == "EXIT")
      exit(EXIT_SUCCESS);
    else if (input == "ADD")
      add_contact(&phoneBook);
    else if (input == "SEARCH") {
      phoneBook.displayContacts();
      displayIndex(&phoneBook);
    } else {
      std::cout << R << "No valid command" << Res << std::endl;
      std::cout << G << "Valid commands : ADD, SEARCH, EXIT\n"
                << Res << std::endl;
    }
  }
  return 0;
}
