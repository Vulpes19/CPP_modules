/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:10:48 by abaioumy          #+#    #+#             */
/*   Updated: 2023/03/29 12:58:50 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>

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
			throw(WrongDatabaseException("file is empty"));

		if ( line != "date,exchange_rate" )
			throw(WrongDatabaseException("wrong file format"));
		while ( file )
		{
			line.clear();
			if ( !std::getline( file, line ) )
				break ;
			std::istringstream iss(line);
			int year, month, day;
			double value;
			char delimiter;
			if ( iss >> year >> delimiter >> month >> delimiter >> day >> delimiter >> value )
			{
				if ( !checkDate(year, month, day) )
					throw(WrongDatabaseException("wrong date format"));
			}
			else
				throw(WrongDatabaseException("wrong file format"));
			std::ostringstream date;
			date << std::setfill('0') << year << "-" << std::setw(2) << month << "-" << std::setw(2) << day;
			std::string amount = std::to_string(value);
			_transactions.insert( std::make_pair( date.str(), amount ) );
		}
		if ( _transactions.empty() )
			throw(WrongDatabaseException("file is empty"));
		if ( _transactions.size() != 1612 )
			throw(WrongDatabaseException("wrong data base"));
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

void	BitcoinExchange::printTransactions( int year, int month, int day, double value )
{
	std::ostringstream date;
	date << std::setfill('0') << year << "-" << std::setw(2) << month << "-" << std::setw(2) << day;
	std::string key = date.str();
	if ( value < 1 )
		std::cout << "Error: not a positive number\n";
	else if ( !checkDate( year, month, day ) )
		std::cout << "Error: bad input => " << key << std::endl;
	else if ( value > 1000 )
		std::cout << "Error: number is too large\n";
	else
	{
		iterator it = _transactions.upper_bound(key);
		if ( it == _transactions.begin() )
			std::cout << "Error: bad input => " << key << std::endl;
		else
		{
			it--;
			const char *ptr = (it->second).c_str();
			double toMultiply = atof(ptr);
			double res = toMultiply * value;
			std::cout << key << " => " << value << " = " << res << std::endl;
		}
	}
}

void	BitcoinExchange::parseInputFile( const char *fileName )
{
		std::ifstream	inputFile;
		std::string		line;
		std::string		tmpLine = "";
		double			amount = 0.0;
		size_t 			pos = 0;

		inputFile.open(fileName);
		if ( !inputFile )
		{
			std::cerr << "connot open input file, please enter a valid file\n";
			return ;
		}
		if ( !std::getline( inputFile, line ) )
		{
			std::cerr << "file is empty\n";
			return ;
		}
		while ( inputFile )
		{
			pos = 0;
			tmpLine = "";
			amount = 0;
			if ( !std::getline( inputFile, line ) )
				break ;
			if ( line == "date | value" )
				continue ;
			if ( line.length() >= 14)
				std::replace( line.begin() + 13, line.end(), ',', '.');
			if ( std::count( line.begin(), line.end(), '.') > 1 )
			{
				std::cout << "Error: bad input => " << line << std::endl;
				continue ;
			}
			std::istringstream iss(line);
			int year, month, day;
			double	value;
			char delimiter;
			if ( iss >> year >> delimiter >> month >> delimiter >> day && iss.get() == ' ' && iss.get() == '|' && iss.get() == ' ' && iss >> value && std::count(line.begin(), line.end(), ' ') == 2 )
				printTransactions( year, month, day, value );
			else
			{
				std::cout << "Error: bad input => " << line << std::endl;
				continue ;
			}
		}
		inputFile.close();
}

bool	BitcoinExchange::checkDate( int year, int month, int day ) const
{
	const int monthDays[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if ( month >= 1 && month <= 12 && day > monthDays[month - 1] )
		return (false);
	if ( year < 2009 || month > 12 || month < 1 )
		return (false);
	else
		return (true);
}

const char	 *WrongDatabaseException::what( void ) const throw()
{
	return (msg.c_str());
}
