/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:51:23 by codespace         #+#    #+#             */
/*   Updated: 2022/11/12 11:15:19 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class   Fixed
{
	public:
		Fixed(); 							 //constructor
		Fixed(const Fixed &); 				 //copy constructor
		~Fixed(); 							 //destructor
		Fixed	&operator = (const Fixed &); //copy assignement
		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
	private:
		int					fixedNbr;
		static const int	fractBits;
};

#endif