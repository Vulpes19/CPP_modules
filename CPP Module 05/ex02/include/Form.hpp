/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:16:34 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/22 18:15:03 by abaioumy         ###   ########.fr       */
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
		Form( std::string, int e, int s );
		virtual ~Form( void );
		const	std::string getName( void ) const;
		bool	getSign( void ) const;
		bool	setSign( bool ) const;
		int	getGradeSign( void ) const;
		int	getGradeExec( void ) const;
		virtual void	beSigned( Bureaucrat &B) = 0;
		virtual	void	execute( const Bureaucrat & ) = 0;
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