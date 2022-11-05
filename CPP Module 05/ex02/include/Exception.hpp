/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:45:17 by codespace         #+#    #+#             */
/*   Updated: 2022/11/05 10:46:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <iostream>
#include <exception>

class	GradeTooHighException : public std::exception
{
	public:
		GradeTooHighException( void ) : msg("Grade is too high"){ };
		virtual	~GradeTooHighException( void ) throw (){ };
		const	char	*what( void ) const throw() { return (msg.c_str()); };
	private:
		std::string	msg;
};

class	GradeTooLowException : public std::exception
{
	public:
		GradeTooLowException( void ) : msg("Grade is too low"){ };
		virtual	~GradeTooLowException( void ) throw() { };
		const	char	*what( void ) const throw(){ return (msg.c_str()); };
	private:
		std::string	msg;
};

#endif