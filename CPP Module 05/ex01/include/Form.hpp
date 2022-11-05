/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:16:34 by abaioumy          #+#    #+#             */
/*   Updated: 2022/11/05 10:54:17 by codespace        ###   ########.fr       */
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
		~Form( void );
		const	std::string getName( void ) const;
		bool	getSign( void ) const;
		int	getGradeSign( void ) const;
		int	getGradeExec( void ) const;
		void	beSigned( Bureaucrat &B);
		friend std::ostream &operator<< ( std::ostream&,  Form& );
	private:
		GradeTooHighException	tooHigh;
		GradeTooLowException	tooLow;
		const	std::string	name;
		bool	isSigned;
		const	int	gradeSign;
		const	int	gradeExec;
};

#endif