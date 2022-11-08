/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:23:19 by codespace         #+#    #+#             */
/*   Updated: 2022/11/08 10:33:54 by codespace        ###   ########.fr       */
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

void	findType( std::string str );
void	convertToType( int type, std::string str );

#endif