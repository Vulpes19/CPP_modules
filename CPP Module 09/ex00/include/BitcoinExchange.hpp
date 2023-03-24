/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:11:03 by codespace         #+#    #+#             */
/*   Updated: 2023/03/24 17:26:36 by abaioumy         ###   ########.fr       */
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
        WrongDatabaseException( void ) {};
        virtual ~WrongDatabaseException( void ) throw() {};
        void    setMsg( std::string );
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
        void    printTransactions( std::string date, double value );
        bool    checkDate( const std::string &date ) const;
    private:
        std::map< std::string, std::string >   _transactions;
        WrongDatabaseException  excp;
};