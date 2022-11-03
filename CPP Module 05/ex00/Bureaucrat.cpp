/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:42 by codespace         #+#    #+#             */
/*   Updated: 2022/11/03 11:27:10 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string n, int g): name(n)
{
	try
	{
		if (g < 1 || g > 150)
			throw(g);
	}
	catch(int g)
	{
		grade = 0;
		if (g < 1)
			GradeTooLowException();
		else
			GradeTooHighException();
	}
	grade = g;
	std::cout << "Bureaucrat is created" << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat is destroyed" << std::endl;
}

void    Bureaucrat::GradeTooHighException( void )
{
	std::cout << "Grade is too high" << std::endl;
}

void    Bureaucrat::GradeTooLowException( void )
{
	std::cout << "Grade is too low" << std::endl;
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
		if (grade < 1 || grade > 150)
			throw(grade);
	}
	catch(int grade)
	{
		if (grade < 1)
			GradeTooLowException();
		else
			GradeTooHighException();
	}
	grade--;
}

void	Bureaucrat::decrementGrade( void )
{
	grade++;
}
