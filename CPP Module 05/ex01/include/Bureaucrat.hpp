/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:50 by codespace         #+#    #+#             */
/*   Updated: 2022/11/05 10:53:34 by codespace        ###   ########.fr       */
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