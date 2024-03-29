/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:25:11 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/16 15:58:10 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
   std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	Account::_nbAccounts++;
	_amount = initial_deposit;
	Account::_totalAmount += _amount;
}

void    Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
			<< ";amount:" << _amount 
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals
			<< std::endl;
}

void    Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
			<< ";p_amount:" << _amount 
			<< ";deposit:" << deposit
			<< ";amount:" << _amount + deposit
			<< ";nb_deposits:" << _nbDeposits + 1
			<< std::endl;
	_nbDeposits++;
	_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}

bool    Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
			<< ";p_amount:" << _amount;
	if (_amount > 0 && _amount > withdrawal && withdrawal > 0)
	{
		_nbWithdrawals++;
		_amount -= withdrawal;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal
				<< ";amount:" << _amount
				<< ";nb_withdrawals:" << _nbWithdrawals
				<< std::endl;
		return (true);
	}
	else
	{
		std::cout << ";withdrawal:" << "refused" << std::endl;
		return (false);
	}
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t currentTime;
	struct tm *localTime;

	time( &currentTime );
	localTime = localtime( &currentTime );
	
	std::cout << "[" << localTime->tm_year + 1900 << localTime->tm_mon + 1 << localTime->tm_mday << "_" << localTime->tm_hour + 1 << localTime->tm_min << localTime->tm_sec << "]" << " ";
}
