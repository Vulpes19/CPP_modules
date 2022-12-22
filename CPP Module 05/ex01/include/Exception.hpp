/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:45:17 by codespace         #+#    #+#             */
/*   Updated: 2022/12/22 11:17:34 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <iostream>
#include <exception>

class	GradeTooHighException : public std::exception
{
	public:
		GradeTooHighException( void );
		virtual	~GradeTooHighException( void ) throw (){ };
		const	char	*what( void ) const throw();
	private:
		std::string	msg;
};

class	GradeTooLowException : public std::exception
{
	public:
		GradeTooLowException( void );
		virtual	~GradeTooLowException( void ) throw() { };
		const	char	*what( void ) const throw();
	private:
		std::string	msg;
};

#endif