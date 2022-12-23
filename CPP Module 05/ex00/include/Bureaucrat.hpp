/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:50 by codespace         #+#    #+#             */
/*   Updated: 2022/12/23 17:53:04 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <fstream>
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

class Bureaucrat
{
	public:
		Bureaucrat( void );
		Bureaucrat( std::string, int );
		Bureaucrat( const Bureaucrat & );
		Bureaucrat	&operator= ( const Bureaucrat & );
		~Bureaucrat( void );
		void	swapBureaucrats( Bureaucrat &, Bureaucrat & );
		const	std::string	getName( void ) const;
		int		getGrade( void ) const;
		void	incrementGrade( void );
		void	decrementGrade( void );
	private:
		GradeTooHighException tooHigh;
		GradeTooLowException	tooLow;
		const	std::string	name;
		int		grade;
};

std::ostream &operator<< ( std::ostream&,  Bureaucrat& );

#endif