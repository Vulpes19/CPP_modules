/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:42 by codespace         #+#    #+#             */
/*   Updated: 2022/11/03 12:50:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string n, int g): name(n)
{
	try
	{
		if (g < 1)
			throw(tooHigh);
		else if (g > 150)
			throw(tooLow);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	grade = g;
	std::cout << "Bureaucrat is created" << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat is destroyed" << std::endl;
}

const	std::string	Bureaucrat::getName( void ) const
{
	return (name);
}

int		Bureaucrat::getGrade( void ) const
{
	return (grade);
}

void	Bureaucrat::incrementGrade( void )
{
	try
	{
		if (grade <= 1)
		{
			throw(tooHigh);
		}
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	grade--;
}

void	Bureaucrat::decrementGrade( void )
{
	try
	{
		if (grade >= 150)
			throw(tooLow);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	grade++;
}
