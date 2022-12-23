/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:31:01 by codespace         #+#    #+#             */
/*   Updated: 2022/12/23 17:47:21 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm( void );
        PresidentialPardonForm( const std::string target );
        PresidentialPardonForm( const PresidentialPardonForm & );
        PresidentialPardonForm  &operator= ( const PresidentialPardonForm & );
        ~PresidentialPardonForm( void );
		void	beSigned( Bureaucrat &B);
        void    action( void ) const;
    private:
        std::string target;
};

#endif