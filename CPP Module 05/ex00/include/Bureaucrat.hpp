/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:50 by codespace         #+#    #+#             */
/*   Updated: 2022/11/03 11:26:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <fstream>

class Bureaucrat
{
	public:
		Bureaucrat( std::string, int );
		~Bureaucrat( void );
		void	GradeTooHighException( void );
		void	GradeTooLowException( void );
		const	std::string	getName( void ) const;
		int		getGrade( void ) const;
		void	incrementGrade( void );
		void	decrementGrade( void );
		friend std::ostream &operator<< ( std::ostream&,  Bureaucrat& );
	private:
		const	std::string	name;
		int		grade;
};

#endif