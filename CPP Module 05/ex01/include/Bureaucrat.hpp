/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:50 by codespace         #+#    #+#             */
/*   Updated: 2022/11/04 11:33:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>
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

class Bureaucrat
{
	public:
		Bureaucrat( std::string, int );
		~Bureaucrat( void );
		const	std::string	getName( void ) const;
		int		getGrade( void ) const;
		void	incrementGrade( void );
		void	decrementGrade( void );
		void	signForm( Form& ) const;
		friend std::ostream &operator<< ( std::ostream&,  Bureaucrat& );
	private:
		GradeTooHighException tooHigh;
		GradeTooLowException	tooLow;
		const	std::string	name;
		int		grade;
};

#endif