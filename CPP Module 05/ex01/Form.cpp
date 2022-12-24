/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:31:02 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/24 14:10:13 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form( void ) : name(""), gradeSign(0), gradeExec(0)
{}

Form::Form( std::string n, int gExec, int gSign ): name(n), gradeSign(gSign), gradeExec(gExec)
{
	isSigned = false;
	if (gExec < 1 || gSign < 1)
		throw(tooHigh);
	else if (gExec > 150 || gExec > 150)
		throw(tooLow);
	std::cout << "Form is created" << std::endl;
}

Form::Form( const Form &newForm ) : name(newForm.name), gradeSign(newForm.gradeSign), gradeExec(newForm.gradeExec)
{
	*this = newForm;
}

Form	&Form::operator= ( const Form &newForm )
{
	if ( this != &newForm )
	{
		isSigned = newForm.isSigned;
	}
	return (*this);
}

Form::~Form( void )
{
	std::cout << "Form " << name << " is destroyed" << std::endl;
}

const   std::string Form::getName( void ) const
{
	return (name);
}

bool    Form::getSign( void ) const
{
	return (isSigned);
}

int Form::getGradeSign( void ) const
{
	return (gradeSign);
}

int Form::getGradeExec( void ) const
{
	return (gradeExec);
}

void    Form::beSigned( Bureaucrat &B)
{
	if ( B.getGrade() <= gradeSign )
	{
		isSigned = true;
	}
	else
	{
		isSigned = false;
		throw(tooLow);
	}
}

std::ostream &operator<<( std::ostream &out, Form &F)
{
	out << "Form name is: " << F.getName() << std::endl;
	out << "Is grade signed: ";
	if ( F.getSign() == true )
		out << "yes" << std::endl;
	else
		out << "no" << std::endl;
	out << "Grade required to sign it: " << F.getGradeSign() << std::endl;
	out << "Grade required to execute it: " << F.getGradeExec();
	return (out);
}