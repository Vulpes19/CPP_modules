/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:11:03 by abaioumy          #+#    #+#             */
/*   Updated: 2023/03/29 11:53:02 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <cstdlib>
#include <exception>

class   WrongDatabaseException : public std::exception
{
    public:
        WrongDatabaseException( std::string const &msg) : msg(msg)  {};
        virtual ~WrongDatabaseException( void ) throw() {};
        // void    setMsg(  );
        const   char *what( void ) const throw();
    private:
        std::string msg;
};

class BitcoinExchange
{
    public:
        typedef std::pair< std::string, std::string > pair;
        typedef std::map< std::string, std::string>::iterator iterator;

        BitcoinExchange( void );
        BitcoinExchange( const BitcoinExchange &copy );
        ~BitcoinExchange( void );
        BitcoinExchange &operator=( const BitcoinExchange &copy );
        void    parseInputFile( const char *fileName );
        void    printTransactions( int year, int month, int day, double value );
        bool    checkDate( int year, int month, int day ) const;

    private:
        std::map< std::string, std::string >   _transactions;
};