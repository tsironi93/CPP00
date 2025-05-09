#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
  std::string name;
  std::string lastName;
  std::string nickname;
  std::string phone_num;
  std::string darkestSecret;

public:
  Contact();

  void setName(const std::string &newName);
  void setLastName(const std::string &newLastName);
  void setNickname(const std::string &newNickname);
  void setPhoneNum(const std::string &newPhoneNum);
  void setDarkestSecret(const std::string &newDarkestSecret);

  std::string getName() const;
  std::string getLastName() const;
  std::string getNickname() const;
  std::string getPhoneNum() const;
  std::string getDarkestSecret() const;

  void displayContact() const;
};

#endif // !CONTACT_HPP
