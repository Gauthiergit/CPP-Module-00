/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeyre <gpeyre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:07:30 by gpeyre            #+#    #+#             */
/*   Updated: 2024/05/27 19:11:36 by gpeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::time_t now = std::time(0);
    std::tm* localTime = std::localtime(&now);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d %H%M%S", localTime);
    std::cout << "[" << buffer << "] ";
}

Account::Account(void) :
	_accountIndex(_nbAccounts),
    _amount(0),
    _nbDeposits(0),
    _nbWithdrawals(0)
{
	_nbAccounts++;
    _displayTimestamp();
    std::cout << "index:" << BLUE << _accountIndex << RESET
		<< ";amount:" << BLUE << _amount << RESET
		<< ";created" << std::endl;
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
    std::cout << "index:" << BLUE << _accountIndex << RESET
		<< ";amount:" << BLUE << _amount << RESET
		<< ";created" << std::endl;
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

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << BLUE << _accountIndex << RESET
        << ";amount:" << BLUE << _amount << RESET
        << ";deposits:" << BLUE << _nbDeposits << RESET
        <<";withdrawals:" << BLUE << _nbWithdrawals << RESET << std::endl;
}

void	Account::makeDeposit( int deposit )
{

	_displayTimestamp();
	std::cout << "index:" << BLUE << _accountIndex << RESET
		<< ";p_amount:" << BLUE << _amount << RESET
		<< ";deposit:" << BLUE << deposit << RESET;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
    std::cout << ";amount:" << BLUE << _amount << RESET
		<< ";nb_deposits:" << BLUE << _nbDeposits << RESET << std::endl;
}

int		Account::checkAmount( void ) const
{
	if (_amount < 0)
		return (1);
	return (0);
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	_p_ammount = _amount;
	
	_displayTimestamp();
	std::cout << "index:" << BLUE << _accountIndex << RESET
		<< ";p_amount:" << BLUE << _amount << RESET;
	_amount -= withdrawal;
	if (checkAmount())
	{
		std::cout << ";withdrawal:refused" << std::endl;
		_amount = _p_ammount;
		return (false);
	}
	else
	{
		_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << BLUE << withdrawal << RESET;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << ";amount:" << BLUE << _amount << RESET
			<< ";nb_withdrawals:" << BLUE << _nbWithdrawals << RESET << std::endl;
	}
	return (true);
}

Account::~Account( void )
{
	_displayTimestamp();
    std::cout << "index:" << BLUE << _accountIndex << RESET
		<< ";amount:" << BLUE << _amount << RESET
		<< ";closed" << std::endl;
}
