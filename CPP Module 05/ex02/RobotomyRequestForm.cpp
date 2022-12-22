/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:21:34 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/22 14:27:11 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( Form &form ) : Form(form)
{
    if ( form.getGradeSign() == 72 && form.getGradeExec() == 45 )
        std::cout << form.getName() << " has been robotomized successfully 50% of the time" << std::endl;
    else
        std::cout << "Robotomy failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{}