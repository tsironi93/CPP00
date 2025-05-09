#include "./Contact.hpp"
#include "./PhoneBook.hpp"
#include <iostream>

Contact::Contact() : name(""), phone_num("") {}

void Contact::setName(const std::string &newName) { name = newName; }

void Contact::setLastName(const std::string &newLastName) {
  lastName = newLastName;
}

void Contact::setNickname(const std::string &newNickname) {
  nickname = newNickname;
}

void Contact::setPhoneNum(const std::string &newPhoneNum) {
  phone_num = newPhoneNum;
}

void Contact::setDarkestSecret(const std::string &newDarkestSecret) {
  darkestSecret = newDarkestSecret;
}

std::string Contact::getName() const { return name; }

std::string Contact::getLastName() const { return lastName; }

std::string Contact::getNickname() const { return nickname; }

std::string Contact::getPhoneNum() const { return phone_num; }

std::string Contact::getDarkestSecret() const { return darkestSecret; }

void Contact::displayContact() const {
  std::cout << C << "Name: " << name << ", Phone: " << phone_num << std::endl;
}
