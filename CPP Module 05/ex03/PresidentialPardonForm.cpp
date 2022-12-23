/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:50:00 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/23 18:04:30 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form(), target("")
{}

PresidentialPardonForm::PresidentialPardonForm( const std::string target ) : Form( "Presidential pardon", 5, 25 )
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &copy )
{
    *this = copy;
}

PresidentialPardonForm  &PresidentialPardonForm::operator= ( const PresidentialPardonForm &copy)
{
    if (this != &copy)
    {
        target = copy.getName();
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{}

void    PresidentialPardonForm::beSigned( Bureaucrat &B )
{
    Form::beSigned(B);
}

void    PresidentialPardonForm::action( void ) const
{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}