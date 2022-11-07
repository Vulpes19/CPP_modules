/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:23:19 by codespace         #+#    #+#             */
/*   Updated: 2022/11/07 11:27:43 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <boost/regex.hpp>
#include <string>

enum types {CHAR, INT, FLOAT, DOUBLE, PSEUDO, _PSEUDO};

void	findType( std::string str );
void	convertToType( int type, std::string str );

#endif