/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:51:23 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/13 15:05:10 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class   Fixed
{
	public:
		Fixed( void ); 							 //constructor
		Fixed( const Fixed & ); 				 //copy constructor
		~Fixed( void ); 							 //destructor
		Fixed	&operator= ( const Fixed & ); //copy assignement
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
	private:
		int					fixedNbr;
		static const int	fractBits;
};

#endif