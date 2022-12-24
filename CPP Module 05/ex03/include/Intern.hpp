/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:31:52 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/24 15:01:26 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class	FormNotfoundException : public std::exception
{
	public:
		FormNotfoundException( void );
		virtual	~FormNotfoundException( void ) throw() { };
		const	char	*what( void ) const throw();
	private:
		std::string	msg;
};
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