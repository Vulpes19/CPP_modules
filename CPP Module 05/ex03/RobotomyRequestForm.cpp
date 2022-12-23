/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:21:34 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/23 14:54:40 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string target ) : Form("Robot to my request", 45, 72)
{
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{}

void    RobotomyRequestForm::beSigned( Bureaucrat &B )
{
    Form::beSigned(B);
}

void    RobotomyRequestForm::action( void ) const
{
    std::cout << target << " has been robotomized successfully 50% of the time" << std::endl;
}