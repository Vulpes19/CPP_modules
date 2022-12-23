/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:16:24 by codespace         #+#    #+#             */
/*   Updated: 2022/12/23 17:47:50 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm( void );
        RobotomyRequestForm( const std::string target );
        RobotomyRequestForm( const RobotomyRequestForm & );
        RobotomyRequestForm &operator= ( const RobotomyRequestForm & );
        ~RobotomyRequestForm( void );
		void	beSigned( Bureaucrat &B);
        void    action( void ) const;
    private:
        std::string target;
};

#endif