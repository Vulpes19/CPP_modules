/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:16:29 by codespace         #+#    #+#             */
/*   Updated: 2022/12/23 17:48:29 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm( const std::string target );
        ShrubberyCreationForm( const ShrubberyCreationForm & );
        ShrubberyCreationForm   &operator= ( const ShrubberyCreationForm & );
        ~ShrubberyCreationForm( void );
		void	beSigned( Bureaucrat &B);
        void    action( void ) const;
    private:
        std::string target;
};

#endif