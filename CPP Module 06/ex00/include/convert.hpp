/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:23:19 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/26 18:55:11 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include<sstream>
#include <string>
#include <stdlib.h>
#include <cstring>

enum types {CHAR, INT, FLOAT, DOUBLE, PSEUDO, _PSEUDO};

bool	check_Pseudo( std::string str );
bool	checkPseudo( std::string str );
bool	checkStr( std::string str );
void	findType( std::string str );
void	convertToType( int type, std::string str );

#endif