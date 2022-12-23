/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:16:34 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/23 17:55:45 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Exception.hpp"
class Bureaucrat;

class Form
{
	public:
		Form( void );
		Form( std::string, int e, int s );
		Form( const Form & );
		Form	&operator= ( const Form & );
		~Form( void );
		const	std::string getName( void ) const;
		bool	getSign( void ) const;
		int	getGradeSign( void ) const;
		int	getGradeExec( void ) const;
		void	beSigned( Bureaucrat & );
	private:
		GradeTooHighException	tooHigh;
		GradeTooLowException	tooLow;
		const	std::string	name;
		bool	isSigned;
		const	int	gradeSign;
		const	int	gradeExec;
};

std::ostream &operator<< ( std::ostream&,  Form& );

#endif