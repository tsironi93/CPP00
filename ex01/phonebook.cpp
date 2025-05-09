/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:56:36 by itsiros           #+#    #+#             */
/*   Updated: 2025/05/09 12:12:36 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdint>
#include <iostream>

std::string formatField(const std::string &field) {
  if (field.length() > 10)
    return field.substr(0, 9) + ".";
  return std::string(10 - field.length(), ' ') + field;
}

PhoneBook::PhoneBook() : count(0), i(0) {}

void PhoneBook::addContact(const Contact &newContact) {
  contacts[i % 8] = newContact;
  i++;
  if (count < 8)
    count++;
}

void PhoneBook::displayContacts() const {

  std::int8_t contactCount = getContactCount();
  std::cout << C << Bold << "____________________________________________"
            << std::endl
            << "|  INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << std::endl
            << "--------------------------------------------" << std::endl;
  for (int i = 0; i < contactCount; i++) {
    std::cout << "|       " << i << ".|" << formatField(contacts[i].getName())
              << "|" << formatField(contacts[i].getLastName()) << "|"
              << formatField(contacts[i].getNickname()) << "|" << std::endl
              << "--------------------------------------------" << std::endl;
  }
  std::cout << Res << std::endl;
}

int PhoneBook::getContactCount() const { return count; }

void PhoneBook::displayContactIndex(std::string index) const {
  int i = std::stoi(index);
  if (i < 0 || i > 7) {
    std::cout << R << Bold << "Wrong index" << Res << std::endl;
    return;
  }
  if (contacts[i].getName() == "") {
    std::cout << Bold << R << "No contact in this index" << Res << std::endl;
    return;
  }
  std::cout << std::endl
            << C << Bold << "first name:\t" << contacts[i].getName()
            << std::endl
            << C << Bold << "last name:\t" << contacts[i].getLastName()
            << std::endl
            << C << Bold << "nickname:\t" << contacts[i].getNickname()
            << std::endl
            << C << Bold << "phone number:\t" << contacts[i].getPhoneNum()
            << std::endl
            << C << Bold << "darkest secret:\t"
            << contacts[i].getDarkestSecret() << std::endl
            << Res << std::endl;
}
