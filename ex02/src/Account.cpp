/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:54:43 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/13 17:19:27 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void) {
    std::time_t now = std::time(0);
    std::tm* tm_ptr = std::localtime(&now);

    char buffer[16];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", tm_ptr);

    std::cout << "[" << buffer << "] ";
}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), 
_nbDeposits(0), _nbWithdrawals(0) {
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout <<BOLD "index:" << _accountIndex << ";amount:" 
    << initial_deposit << ";created" RESET<< std::endl;
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << BOLD<< "index:" << _accountIndex << ";amount:" 
    << _amount << ";closed" << RESET << std::endl;
}

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << BLUE <<  "accounts:" << _nbAccounts << ";total:" << _totalAmount 
    << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals 
    << RESET << std::endl;
}

void Account::makeDeposit(int deposit) {
    int p_amount = _amount;
    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;

    _displayTimestamp();
    std::cout << GREEN "index:" << _accountIndex << ";p_amount:" << p_amount 
    << ";deposit:" << deposit << ";amount:" << _amount 
    << ";nb_deposits:" << _nbDeposits <<  RESET <<std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    int p_amount = _amount;
    _displayTimestamp();

    if (withdrawal > _amount) {
        std::cout << BOLD RED << "index:" << _accountIndex << ";p_amount:" << _amount 
        << ";withdrawal:refused" << RESET <<std::endl;
        return false;
    } 
    else {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;

        std::cout << RED << "index:" << _accountIndex << ";p_amount:" << p_amount 
        << ";withdrawal:" << withdrawal << ";amount:" << _amount 
        << ";nb_withdrawals:" << _nbWithdrawals << RESET << std::endl;
        return true;
    }
}

int Account::checkAmount(void) const {
    return _amount;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex 
    << ";amount:" << _amount << ";deposits:" << _nbDeposits 
    << ";withdrawals:" << _nbWithdrawals << std::endl;
}
