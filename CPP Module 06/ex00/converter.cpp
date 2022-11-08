/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:25:39 by codespace         #+#    #+#             */
/*   Updated: 2022/11/08 10:53:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"


bool	checkPseudo( std::string str )
{
	std::string cmp = "inf";

	if ( str[0] != '+' && str[0] != '-')
		return (false);
	for ( unsigned int i = 1, j = 0; i < str.length(), j < 3; i++, j++ )
	 {
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

	for ( unsigned int i = 0, j = 0; i < str.length(), j < 3; i++, j++ )
	 {
		if ( str[i] != cmp[j] )
			return (false);
	 }
	 if ( str[str.length() - 1] != 'f' && str[str.length() - 1] != 'n' )
	 	return (false);
	return (true);
}

void	convertToType( int type, std::string str )
{
	char	*ptrEnd;
	char	ptr[str.length()];
	long	int nbr;
	
	for ( unsigned int i = 0; i < str.length(); i++ )
		ptr[i] = str[i];
	switch ( type )
	{
	case CHAR:
	{
		std::cout << "char: " << str << std::endl;
		std::cout << "int: non displayable" << std::endl;
		std::cout << "float: non displayable" << std::endl;
		std::cout << "double: non displayable" << std::endl;
		break;
	}
	case INT:
	{
		nbr = strtol(ptr, &ptrEnd, 10);
		std::cout << "char: non displayable" << std::endl;
		std::cout << "int: " << nbr << std::endl;
		float nbrf = (float)nbr;
		std::cout << "float: " <<  nbrf << ".0f" << std::endl;
		double nbrd = (double)nbr;
		std::cout << "double: " << nbrd << ".0" << std::endl;
		break;
	}
	case FLOAT:
	{
		/*float nbrf = std::stof(str);
		std::cout << "char: non displayable" << std::endl;
		std::cout << "float: " <<  nbrf << "f" << std::endl;
		int nbr = (int)nbrf;
		std::cout << "int: " << nbr << std::endl;
		double nbrd = (double)nbrf;
		std::cout << "double: " << nbrd << std::endl;*/
		break;
	}
	case DOUBLE:
	{
		/*
		std::cout << "char: non displayable" << std::endl;
		std::cout << "double: " << nbrd << ".0" << std::endl;
		std::cout << "int: " << nbr << std::endl;
		std::cout << "float: " <<  nbrf << ".0f" << std::endl;*/
		break;
	}
	case PSEUDO:
	{
		//char sign = str[0];
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
			std::cout << "double: " << str.substr(0, str.length() - 2) << std::endl;
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
	if ( !ssi.good() && str.length() == 1)
	{
		std::cout << "it's char" << std::endl;
		convertToType(CHAR, str);
	}
	else if ( checkPseudo( str ) )
	{
		std::cout << "it's pseudo literal" << std::endl;
		convertToType(PSEUDO, str);
	}
	else if ( check_Pseudo( str ) )
	{
		std::cout << "it's pseudo literal" << std::endl;
		convertToType(_PSEUDO, str);
	}
	else if ( !ssi.fail() && (str.find('.') == 0 || str.find('.') > str.length()))
	{
		std::cout << "it's int" << std::endl;
		convertToType(INT, str);
	}
	else if ( !ssf.fail() && (str.find('.') > 0 && str.find('.') < str.length()) && (str.find('f') > 0 && str.find('f') < str.length()))
	{
		std::cout << "it's float" << std::endl;
		convertToType(FLOAT, str);
	}
	else if ( !ssd.fail() && (str.find('.') > 0 && str.find('.') < str.length()))
	{
		std::cout << "it's double" << std::endl;
		convertToType(DOUBLE, str);
	}
	else
		std::cerr << "Please enter <char> or <int> or <float> or <double> or <pseudo_type>" << std::endl;
}
