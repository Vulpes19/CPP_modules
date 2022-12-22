/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:50:00 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/22 18:18:44 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( Form &form ) : Form( form )
{}

PresidentialPardonForm::~PresidentialPardonForm( void )
{}

void    PresidentialPardonForm::beSigned( Bureaucrat &B )
{
    if ( getGradeSign() == 72 && getGradeExec() == 45 )
    {
        B.signForm( *this );
        setSign( true );
    }
    else
        setSign( false );
}

void    PresdentialPardonForm::execute( const Bureaucrat &executor )
{
    if (getSign() == true)
        std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}