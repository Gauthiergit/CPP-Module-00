/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:07:30 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/26 16:15:25 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

#define BLUE "\033[94m"
#define RESET "\033[0m"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
    // Obtenir l'heure actuelle
    std::time_t now = std::time(0);
    
    // Convertir en structure tm locale
    std::tm* localTime = std::localtime(&now);
    
    // Formater et afficher l'horodatage
    char buffer[15];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d %H%M%S", localTime);
    std::cout << "[" << buffer << "] ";
}

Account::Account( int initial_deposit ) :
    _accountIndex(_nbAccounts),
    _amount(initial_deposit),
    _nbDeposits(0),
    _nbWithdrawals(0)
{
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << BLUE << _accountIndex << RESET << ";amount:" << BLUE << _amount << RESET << ";created" << std::endl;
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << BLUE << getNbAccounts() << RESET
        << ";total:" << BLUE << getTotalAmount() << RESET
        << ";deposits:" << BLUE << getNbDeposits() << RESET
        <<";withdrawals:" << BLUE << getNbWithdrawals() << RESET << std::endl;
}

Account::~Account( void ) {}
