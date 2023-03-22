/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:11:03 by codespace         #+#    #+#             */
/*   Updated: 2023/03/22 15:21:10 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <cstdlib>
// #include <pair>

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
        bool    checkDate( std::string &date ) const;
    private:
        std::map< std::string, std::string >   _transactions;
};