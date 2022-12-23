/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:42 by codespace         #+#    #+#             */
/*   Updated: 2022/12/23 13:50:21 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string n, int g): name(n)
{
	grade = 0;
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

void	Bureaucrat::signForm( Form &form ) const
{
    if ( form.getSign() == true )
		std::cout << name << " signed " << form.getName() << std::endl;
    else
	{
		 std::cerr << name << " couldn't sign " << form.getName() << " because ";
		try
        {
            if (form.getGradeSign() < 1)
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

void	Bureaucrat::executeForm( const Form &form ) const
{
	if ( form.getSign() )
	{
		form.action();
		std::cout << name << " executed " << form.getName() << std::endl;
	}
	else
		std::cerr << name << " wasn't able to execute " << form.getName() << std::endl;
}

std::ostream &operator<<( std::ostream &out, Bureaucrat &B)
{
	out << B.getName() << ", " << "bureaucrat grade is ";
	out << B.getGrade() << std::endl;
	return (out);
}
