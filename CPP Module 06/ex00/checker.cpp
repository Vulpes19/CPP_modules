/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:53:24 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/26 18:53:56 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool	checkStr( std::string str )
{
	bool isFloat = false;
	bool	isPoint = false;

	if ( str == "nan" || str == "nanf" || str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff" )
		return (true);
	if ( !(str[0] >= '0' && str[0] <= '9') && str[0] != '+' && str[0] != '-' && str[0] != '.')
		return ( false );
	for ( unsigned int i = 1 ; i < str.length() - 1; i++ )
	{
		if ( str[i] == '.' && isPoint == false )
			isPoint = true;
		if ( str[i + 1] && str[i + 1] == '.' && isPoint == true )
			return (false);
		if ( str[i] == '.' && (str[i + 1] >= '0' && str[i + 1] <= '9') )
			isFloat = true;
		if ( !(str[i] >= '0' && str[i] <= '9') && str[i] != '.')
			return ( false );
	}
	if ( str[str.length() - 1] == 'f' && isFloat == true )
		return (true);
	else if ( str[str.length() - 1] == 'f' )
		return (false);
	if ( !(str[str.length() - 1] >= '0' && str[str.length() - 1] <= '9') )
		return (false);
	return (true);
}

bool	checkPseudo( std::string str )
{
	std::string cmp = "inf";

	if ( str[0] != '+' && str[0] != '-')
		return (false);
	for ( unsigned int i = 1, j = 0; i < str.length(); i++, j++ )
	 {
		if (j >= 3)
			break ;
		if ( str[i] != cmp[j] )
			return (false);
	 }
	 if ( str[str.length() - 1] != 'f' )
	 	return (false);
	return (true);
}

bool	check_Pseudo( std::string str )
{
	std::string cmp = "nan";

	for ( unsigned int i = 0, j = 0; i < str.length(); i++, j++ )
	 {
		if (j >= 3)
			break ;
		if ( str[i] != cmp[j] )
			return (false);
	 }
	 if ( str[str.length() - 1] != 'f' && str[str.length() - 1] != 'n' )
	 	return (false);
	return (true);
}