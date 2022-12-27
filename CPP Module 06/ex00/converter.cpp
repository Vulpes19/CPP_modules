/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:25:39 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/27 10:26:05 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	convertToType( int type, std::string str )
{
	char	*ptrEnd;
	char	ptr[str.length()];
	long	int nbr_l;
	
	for ( unsigned int i = 0; i < str.length(); i++ )
		ptr[i] = str[i];
	switch ( type )
	{
	case CHAR:
	{
		std::cout << "char: '" << str << "'" << std::endl;
		int nbr_i = static_cast<int>(str[0]);
		std::cout << "int: " << nbr_i << std::endl;
		std::cout << "float: non displayable" << std::endl;
		std::cout << "double: non displayable" << std::endl;
		break;
	}
	case INT:
	{
		nbr_l = strtol(ptr, &ptrEnd, 10);
		int nbr = static_cast<int>(nbr_l);
		if ( nbr >= 32 && nbr < 127 )
		{
			char ch = static_cast<char>(nbr);
			std::cout << "char: '" << ch << "'" << std::endl;
		}
		else if ( nbr >= 0 && nbr < 32 )
			std::cout << "char: non displayable " << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
		if ( nbr_l >= INT_MIN && nbr_l <= INT_MAX )
			std::cout << "int: " << nbr << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
		float nbr_f = static_cast<float>(nbr_l);
		std::cout << "float: " <<  nbr_f << ".0f" << std::endl;
		double nbr_d = static_cast<double>(nbr_l);
		std::cout << "double: " << nbr_d << ".0" << std::endl;
		break;
	}
	case FLOAT:
	{
		nbr_l = strtol(ptr, &ptrEnd, 10);
		int nbr = static_cast<int>(nbr_l);
		if ( nbr >= 32 && nbr < 127 )
		{
			char ch = static_cast<char>(nbr);
			std::cout << "char: '" << ch << "'" << std::endl;
		}
		else if ( nbr >= 0 && nbr < 32 )
			std::cout << "char: non displayable " << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
		float nbr_f = strtof(ptr, &ptrEnd);
		std::cout << "float: " <<  nbr_f << "f" << std::endl;
		int nbr_i = static_cast<int>(nbr_f);
		if ( nbr_i <= INT_MAX && nbr_i >= INT_MIN )
			std::cout << "int: " << nbr_i << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
		double nbr_d = static_cast<double>(nbr_f);
		std::cout << "double: " << nbr_d << std::endl;
		break;
	}
	case DOUBLE:
	{
		nbr_l = strtol(ptr, &ptrEnd, 10);
		int nbr = static_cast<int>(nbr_l);
		if ( nbr >= 32 && nbr < 127 )
		{
			char ch = static_cast<char>(nbr);
			std::cout << "char: '" << ch << "'" << std::endl;
		}
		else if ( nbr >= 0 && nbr < 32 )
			std::cout << "char: non displayable " << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
		double nbr_d = strtod(ptr, &ptrEnd);
		std::cout << "double: " << nbr_d << std::endl;
		int nbr_i = static_cast<int>(nbr_d);
		if ( nbr_i <= INT_MAX && nbr_i >= INT_MIN )
			std::cout << "int: " << nbr_i << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
		float nbr_f = static_cast<float>(nbr_d);
		std::cout << "float: " <<  nbr_f << "f" << std::endl;
		break;
	}
	case PSEUDO:
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if ( str[str.length()-1] == 'f' && str[str.length()-2] == 'f' )
		{	
			std::cout << "float: " << str << std::endl;
			std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
		}
		else
		{
			std::cout << "float: " << str << "f" << std::endl;
			std::cout << "double: " << str << std::endl;
		}
		break;
	}
	case _PSEUDO:
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if ( str[str.length()-1] == 'f')
		{	
			std::cout << "float: " << str << std::endl;
			std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
		}
		else
		{
			std::cout << "float: " << str << "f" << std::endl;
			std::cout << "double: " << str << std::endl;
		}
		break;
	}
	default:
		break;
	}
}

void	findType( std::string str )
{
	std::stringstream	ssi;
	std::stringstream	ssf;
	std::stringstream	ssd;

	ssi << str;
	ssf << str;
	ssd << str;
	if ( str.length() == 1 && ((str[0] >= 32 && str[0] <= 47) || (str[0] >= 58 && str[0] < 127)) )
	{
		convertToType(CHAR, str);
		return ;
	}
	if ( !checkStr( str ) )
	{	
		std::cerr << "Please enter <char>, <int>, <float>, <double> or <pseudo_type>" << std::endl;
		return ;
	}
	if ( checkPseudo( str ) )
	{
		convertToType(PSEUDO, str);
		return ;
	}
	if ( check_Pseudo( str ) )
	{
		convertToType(_PSEUDO, str);
		return ;
	}
	if ( !ssi.fail() && str.find('.') > str.length() )
	{
		convertToType(INT, str);
		return ;
	}
	if ( !ssf.fail() && (str.find('.') > 0 && str.find('.') < str.length() - 1) && (str.find('f') > 0 && str.find('f') < str.length() ) )
	{
		convertToType(FLOAT, str);
		return ;
	}
	if ( !ssd.fail() && (str.find('.') > 0 && str.find('.') < str.length() - 1) )
	{
		convertToType(DOUBLE, str);
		return ;
	}
	std::cerr << "Please enter <char>, <int>, <float>, <double> or <pseudo_type>" << std::endl;
}
