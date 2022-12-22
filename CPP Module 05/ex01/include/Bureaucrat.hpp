/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:50 by codespace         #+#    #+#             */
/*   Updated: 2022/12/22 12:24:49 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <fstream>
#include "Exception.hpp"
#include "Form.hpp"

class Bureaucrat
{
	public:
		Bureaucrat( std::string, int );
		Bureaucrat( const Bureaucrat & );
		const Bureaucrat	&operator= ( const Bureaucrat & ) const;
		~Bureaucrat( void );
		void	swapBureaucrats( std::string &, std::string & ) const;
		const	std::string	getName( void ) const;
		int		getGrade( void ) const;
		void	incrementGrade( void );
		void	decrementGrade( void );
		void	signForm( Form& ) const;
	private:
		GradeTooHighException tooHigh;
		GradeTooLowException	tooLow;
		const	std::string	name;
		int		grade;
};

std::ostream &operator<< ( std::ostream&,  Bureaucrat& );

#endif