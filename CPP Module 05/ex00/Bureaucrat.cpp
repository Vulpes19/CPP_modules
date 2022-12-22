/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:42 by codespace         #+#    #+#             */
/*   Updated: 2022/12/22 11:14:18 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string n, int g): name(n)
{
	grade = -1;
	while (true)
	{
		try
		{
			if (g < 1)
				throw(tooHigh);
			else if (g > 150)
				throw(tooLow);
			else
				break ;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			return ;
		}
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
	while (true)
	{
		try
		{
			if (grade <= 1)
			{
				throw(tooHigh);
			}
			else
				break ;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			return ;
		}
	}
	grade--;
}

void	Bureaucrat::decrementGrade( void )
{
	while (true)
	{
		try
		{
			if (grade >= 150)
				throw(tooLow);
			else
				break ;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			return ;
		}
	}
	grade++;
}

GradeTooHighException::GradeTooHighException( void ) : msg("Grade is too high")
{}

const char	*GradeTooHighException::what( void ) const throw()
{
	return (msg.c_str());
}

GradeTooLowException::GradeTooLowException( void ) : msg("Grade is too low")
{}

const char	*GradeTooLowException::what( void ) const throw()
{
	return (msg.c_str());
}