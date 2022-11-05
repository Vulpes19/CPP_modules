/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:42 by codespace         #+#    #+#             */
/*   Updated: 2022/11/05 10:41:10 by codespace        ###   ########.fr       */
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

void    Bureaucrat::signForm( Form &F) const
{
    if (F.getGradeSign() >= 1 && F.getGradeSign() <= 150)
    {
        std::cout << name << " signed " << F.getName() << std::endl;
    }
    else
    {
        std::cerr << name << " couldn't sign " << F.getName() << " because ";
        try
        {
            if (F.getGradeSign() < 1)
                throw(tooHigh);
            else
                throw(tooLow);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}

std::ostream &operator<<( std::ostream &out, Bureaucrat &B)
{
	out << B.getName() << ", " << "bureaucrat grade is ";
	out << B.getGrade() << std::endl;
	return (out);
}
