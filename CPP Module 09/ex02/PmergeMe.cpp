/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:16:48 by abaioumy          #+#    #+#             */
/*   Updated: 2023/03/29 13:08:30 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

NotIntegerException::NotIntegerException( const std::string &msg ) : msg(msg)
{}

NotIntegerException::~NotIntegerException( void ) throw() {}
const   char    *NotIntegerException::what( void ) const throw()
{
    return (msg.c_str());
}