/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:10:48 by codespace         #+#    #+#             */
/*   Updated: 2023/03/24 17:26:28 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "BitcoinExchange.hpp"
#include <fstream>

BitcoinExchange::BitcoinExchange( void )
{
	std::ifstream file;
	file.open( "data.csv" );
	if ( !file.is_open() )
	{
		std::cerr << "no data.csv file is found\n";
		return ;
	}
	std::string line;
	if ( !std::getline( file, line ) )
	{
		excp.setMsg("file is empty");
		throw(excp.what());
	}
	if ( line != "date,exchange_rate" )
	{
		excp.setMsg("wrong file format");
		throw(excp.what());
	}
	while ( file )
	{
		line = "";
		if ( !std::getline( file, line ) )
			break ;
		if ( !checkDate(line.substr(0, 10)) )
		{
			excp.setMsg("wrong date format");
			throw(excp.what());
		}
		if (line.length() < 12 )
		{
			excp.setMsg("wrong file format");
			throw(excp.what());
		}
		std::string value = line.substr(11, line.length());
		_transactions.insert( std::make_pair( line.substr( 0, 10), value ) );
	}
	file.close();
}

BitcoinExchange::BitcoinExchange(  const BitcoinExchange &copy )
{
	_transactions = copy._transactions;
}

BitcoinExchange::~BitcoinExchange( void )
{
	_transactions.clear();
}

BitcoinExchange	&BitcoinExchange::operator=( const BitcoinExchange &copy )
{
	if ( this != &copy )
	{
		_transactions = copy._transactions;
	}
	return (*this);
}

void	BitcoinExchange::printTransactions( std::string date, double value )
{
	if ( value < 0 )
		std::cout << "Error: not a positive number\n";
	else if ( !checkDate( date ) )
		std::cout << "Error: bad input => " << date << std::endl;
	else if ( value > 1000 )
		std::cout << "Error: number is too large\n";
	else
	{
		const char *tmp;
		if ( _transactions.count(date) )
			tmp = _transactions[date].c_str();
		else
		{
			iterator it = _transactions.lower_bound(date);
			tmp = (it->second).c_str();
		}
		const char *ptr = tmp;
		if ( ptr == NULL )
		{
			std::cout << "im null\n";
			exit(1);
		}
		double toMultiply = atof(ptr);
		double res = toMultiply * value;
		std::cout << date << " => " << value << " = " << res << std::endl;
	}
}

bool	BitcoinExchange::checkDate( const std::string &date ) const
{
	const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};
	int month = atoi(date.substr(5, 2).c_str());
	if ( atoi(date.substr(5, 2).c_str()) > monthDays[month] )
		return (false);
	if ( date.substr(0, 4) > "2022"
		|| date.substr(0, 4) < "2009"
		|| date.substr(5, 2) > "12" 
		|| date.substr(5, 2) < "01"
		|| date.substr(8, 2) > "31"
		|| date.substr(8, 2) < "01")
		return (false);
	else
		return (true);
}

void	WrongDatabaseException::setMsg( std::string s ) 
{
	msg = s;
}

const char	 *WrongDatabaseException::what( void ) const throw()
{
	return (msg.c_str());
}
