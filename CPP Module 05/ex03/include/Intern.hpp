/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:31:52 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/23 17:59:53 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern
{
    public:
        Intern( void );
        Intern( const Intern & );
        Intern  &operator= ( const Intern & );
        ~Intern( void );
        Form    *makeForm( const std::string, const std::string );
};

#endif