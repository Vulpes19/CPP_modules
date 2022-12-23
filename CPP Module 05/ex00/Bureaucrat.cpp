/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:42 by codespace         #+#    #+#             */
/*   Updated: 2022/12/23 17:53:44 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name(""), g(0)
{}

Bureaucrat::Bureaucrat( std::string n, int g): name(n)
{
	grade = 0;
	if (g < 1)
		throw(tooHigh);
	else if (g > 150)
		throw(tooLow);
	grade = g;
	std::cout << "Bureaucrat is created" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &B )
{
	std::cout << "Bureaucrat copy constructor is called" << std::endl;
	*this = B;
}

Bureaucrat	&Bureaucrat::operator= ( const Bureaucrat &B )
{
	std::cout << "Bureaucrat copy assignement operator is called" << std::endl;
	if ( this != &B )
	{
		grade = B.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat is destroyed" << std::endl;
}

void	Bureaucrat::swapBureaucrats( Bureaucrat &b1, Bureaucrat &b2 )
{
	Bureaucrat	tmp = b1;

	b1 = b2;
	b2 = tmp;
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
	if (grade <= 1)
		throw(tooHigh);
	grade--;
}

void	Bureaucrat::decrementGrade( void )
{
	if (grade >= 150)
		throw(tooLow);
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

std::ostream &operator<<( std::ostream &out, Bureaucrat &B)
{
	out << B.getName() << ", " << "bureaucrat grade is ";
	out << B.getGrade() << std::endl;
	return (out);
}