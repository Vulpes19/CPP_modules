/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:16:34 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/24 15:08:02 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

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

class Form
{
	public:
		Form( void );
		Form( std::string, int, int );
		Form( const Form & );
		Form	&operator= ( const Form & );
		virtual ~Form( void );
		const	std::string getName( void ) const;
		bool	getSign( void ) const;
		bool	setSign( bool ) const;
		int	getGradeSign( void ) const;
		int	getGradeExec( void ) const;
		virtual void	beSigned( Bureaucrat &B) = 0;
		void	execute( const Bureaucrat & ) const;
    	virtual void    action( void ) const = 0;
	private:
		GradeTooHighException	tooHigh;
		GradeTooLowException	tooLow;
		const	std::string	name;
		bool	isSigned;
		const	int	gradeExec;
		const	int	gradeSign;
};

std::ostream &operator<< ( std::ostream&,  Form& );

#endif