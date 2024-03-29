/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:41:31 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/24 15:07:07 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern( void )
{}

Intern::Intern( const Intern &newIntern )
{
    *this = newIntern;
}

Intern  &Intern::operator= ( const Intern & )
{
    return (*this);
}

Intern::~Intern( void )
{}

Form *Intern::makeForm( std::string formName, std::string target )
{
    FormNotfoundException   formNotFound;
    Form    *form1 = new ShrubberyCreationForm(target);
    Form    *form2 = new PresidentialPardonForm(target);
    Form    *form3 = new RobotomyRequestForm(target);
    Form    *forms[3] = {form1, form2, form3};
    std::string names[3] = {"shrubbery creation", "presidential pardon", "robotomy request"};

    for (int i = 0; i < 3; i++)
    {
        if ( names[i] == formName )
        {
            for (int j = 0; j < 3; j++)
            {
                if ( i != j )
                    delete forms[j];
            }
            return (forms[i]);
        }
    }
     for (int i = 0; i < 3; i++)
        delete forms[i];
    throw(formNotFound);
}

FormNotfoundException::FormNotfoundException( void ) : msg("Form not found")
{}

const char	*FormNotfoundException::what( void ) const throw()
{
	return (msg.c_str());
}