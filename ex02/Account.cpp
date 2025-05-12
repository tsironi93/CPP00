/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:01:44 by itsiros           #+#    #+#             */
/*   Updated: 2025/05/12 10:42:40 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0),
      _nbWithdrawals(0) {

  _totalAmount += _amount;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";"
            << "amount:" << _amount << ";"
            << "created" << std::endl;
}

Account::~Account() {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";"
            << "amount:" << _amount << ";"
            << "closed" << std::endl;
}

int Account::getNbAccounts() { return _nbAccounts; }

int Account::getTotalAmount() { return _totalAmount; }

int Account::getNbDeposits() { return _totalNbDeposits; }

int Account::getNbWithdrawals() { return _totalNbWithdrawals; }

void Account::displayAccountsInfos() {
  _displayTimestamp();
  std::cout << "index:" << getNbAccounts() << ";"
            << "total:" << getTotalAmount() << ";"
            << "deposits:" << getNbDeposits() << ";"
            << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit) {
  _displayTimestamp();
  std::cout << "index" << _accountIndex << ";"
            << "p_amount:" << _amount << ";"
            << "nb_deposits:" << _nbDeposits << ";";
  _amount += deposit;
  _totalAmount += deposit;
  _nbDeposits++;
  _totalNbDeposits++;
  std::cout << "deposit:" << deposit << ";"
            << "amount:" << _amount << ";"
            << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
  _displayTimestamp();
  std::cout << " index:" << _accountIndex << ";"
            << "amount:" << _amount << ";";
  if (_amount >= withdrawal) {
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << "withdrawal:" << withdrawal << ";"
              << "amount:" << _amount << ";"
              << "nb_witdrawals:" << _nbWithdrawals << std::endl;
    return true;
  } else {
    std::cout << "withdrawal:refused" << std::endl;
    return false;
  }
}

int Account::checkAmount() const { return _amount; }

void Account::displayStatus() const {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";"
            << "amount:" << _amount << ";"
            << "deposits:" << _nbDeposits << ";"
            << "withdrawals:" << _nbWithdrawals << ";" << std::endl;
}

void Account::_displayTimestamp() {
  time_t now = time(NULL);
  struct tm *timeinfo = localtime(&now);
  char buffer[20];

  strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", timeinfo);
  std::cout << buffer;
}
