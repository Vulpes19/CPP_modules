/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:25:39 by codespace         #+#    #+#             */
/*   Updated: 2022/11/07 11:26:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"


void	convertToType( int type, std::string str )
{
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
		int nbr = stoi(str);
		std::cout << "char: non displayable" << std::endl;
		std::cout << "int: " << nbr << std::endl;
		float nbrf = stof(str);
		std::cout << "float: " <<  nbrf << ".0f" << std::endl;
		double nbrd = stod(str);
		std::cout << "double: " << nbrd << ".0" << std::endl;
		break;
	}
	case FLOAT:
	{
		float nbrf = stof(str);
		std::cout << "char: non displayable" << std::endl;
		std::cout << "float: " <<  nbrf << "f" << std::endl;
		int nbr = (int)nbrf;
		std::cout << "int: " << nbr << std::endl;
		double nbrd = (double)nbrf;
		std::cout << "double: " << nbrd << std::endl;
		break;
	}
	case DOUBLE:
	{
		std::cout << "char: non displayable" << std::endl;
		double nbrd = stod(str);
		std::cout << "double: " << nbrd << ".0" << std::endl;
		int nbr = stoi(str);
		std::cout << "int: " << nbr << std::endl;
		float nbrf = stof(str);
		std::cout << "float: " <<  nbrf << ".0f" << std::endl;
		break;
	}
	case PSEUDO:
	{
		char sign = str[0];
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
	std::regex	charex("[a-zA-Z]");
	std::regex	intex("[+-]?[0-9]+");
	std::regex	floatex("[+-]?([0-9]*[.])?[0-9]+[f]$");
	std::regex	doublex("[+-]?([0-9]*[.])?[0-9]+");
	std::regex	pseudex("[+-](inf)[f]?");	
	std::regex	_pseudex("(nan)[f]?");

	if ( std::regex_match(str, charex) )
	{
		std::cout << "it's char" << std::endl;
		convertToType(CHAR, str);
	}
	else if ( std::regex_match(str, intex) )
	{
		std::cout << "it's int" << std::endl;
		convertToType(INT, str);
	}
	else if ( std::regex_match(str, floatex) )
	{
		std::cout << "it's float" << std::endl;
		convertToType(FLOAT, str);
	}
	else if ( std::regex_match(str, doublex) )
	{
		std::cout << "it's double" << std::endl;
		convertToType(DOUBLE, str);
	}
	else if ( std::regex_match(str, pseudex) )
	{
		std::cout << "it's pseudo literal" << std::endl;
		convertToType(PSEUDO, str);
	}
	else if ( std::regex_match(str, _pseudex) )
	{
		std::cout << "it's pseudo literal" << std::endl;
		convertToType(_PSEUDO, str);
	}
	else
		std::cerr << "Please enter <char> or <int> or <float> or <double> or <pseudo_type>" << std::endl;
}
