/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:31:02 by abaioumy          #+#    #+#             */
/*   Updated: 2022/11/05 11:02:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Form::Form( std::string n, int gExec, int gSign ): name(n), gradeExec(gExec), gradeSign(gSign)
{
	try
	{
		if (gExec < 1 || gSign < 1)
			throw(tooHigh);
		else if (gExec > 150 || gExec > 150)
			throw(tooLow);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	isSigned = false;
	std::cout << "Form is created" << std::endl;
}

Form::~Form( void )
{
	std::cout << "Form is destroyed" << std::endl;
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
	try
	{
		if (gradeSign < 150)
		{
			isSigned = false;
			throw(tooLow);
		}
		else
			isSigned = true;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream &operator<<( std::ostream &out, Form &F)
{
	out << "Form name is: " << F.getName() << std::endl;
	out << "Is grade signed: " << F.getSign() << std::endl;
	out << "Grade required to sign it: " << F.getGradeSign() << std::endl;
	out << "Grade required to execute it: " << F.getGradeExec() << std::endl;
	return (out);
}