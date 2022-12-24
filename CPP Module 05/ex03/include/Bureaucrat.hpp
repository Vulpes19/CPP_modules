/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:50 by codespace         #+#    #+#             */
/*   Updated: 2022/12/24 15:06:29 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class Bureaucrat
{
	public:
		Bureaucrat( void );
		Bureaucrat( std::string, int );
		Bureaucrat( const Bureaucrat & );
		Bureaucrat	&operator= ( const Bureaucrat & );
		~Bureaucrat( void );
		const	std::string	getName( void ) const;
		int		getGrade( void ) const;
		void	incrementGrade( void );
		void	decrementGrade( void );
		void	signForm( Form& ) const;
		void	executeForm( const Form & ) const;
	private:
		GradeTooHighException tooHigh;
		GradeTooLowException	tooLow;
		const	std::string	name;
		int		grade;
};

std::ostream &operator<< ( std::ostream&,  Bureaucrat& );

#endif