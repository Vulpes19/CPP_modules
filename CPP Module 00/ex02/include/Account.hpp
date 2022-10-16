/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:23:52 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/16 15:48:09 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ACCOUNT_HPP__
#define __ACCOUNT_HPP__

class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void ) { return (_nbAccounts); };
	static int	getTotalAmount( void ) { return (_totalAmount); };
	static int	getNbDeposits( void ) { return (_totalNbDeposits); };
	static int	getNbWithdrawals( void ) { return (_totalNbWithdrawals); };
	static void	displayAccountsInfos( void );

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;


private:

	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void );

	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	Account( void );

};

#endif /* __ACCOUNT_HPP__ */