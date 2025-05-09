/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:01:44 by itsiros           #+#    #+#             */
/*   Updated: 2025/05/09 16:23:39 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Account.hpp"
#include <iostream>

Account::Account()
    : _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0) {}

int Account::getNbAccounts() { return _nbAccounts; }

int Account::getTotalAmount() { return _totalAmount; }

int Account::getNbDeposits() { return _totalNbDeposits; }

int Account::getNbWithdrawals() { return _totalNbWithdrawals; }

void Account::displayAccountsInfos() {
  std::cout << "index:" << _nbAccounts << ";"
            << "total:" << _totalAmount << ";"
            << "deposits:" << _totalNbDeposits << ";"
            << "withdrawals:" << _totalNbWithdrawals << ";" << std::endl;
}
