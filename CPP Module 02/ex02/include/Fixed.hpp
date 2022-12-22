/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:24:33 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/18 13:09:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
	public:
		Fixed();
		Fixed( const Fixed & );
		Fixed( const int );
		Fixed( const float );
		~Fixed();
		Fixed	&operator = ( const Fixed & );
		Fixed	operator+ ( const Fixed & ) const;
		Fixed	operator- ( const Fixed & ) const;
		Fixed	operator* ( const Fixed & ) const;
		Fixed	operator/ ( const Fixed & ) const;
		Fixed	&operator++ ( void ); //pre-increment operator
		Fixed	operator++ ( int ); //post-increment operator
		Fixed	&operator-- ( void ); //pre-decrement operator
		Fixed	operator-- ( int ); //post-decrement operator
		bool	operator== ( const Fixed & ) const;
		bool	operator!= ( const Fixed & ) const;
		bool	operator< ( const Fixed & ) const;
		bool	operator> ( const Fixed & ) const;
		bool	operator<= ( const Fixed & ) const;
		bool	operator>= ( const Fixed & ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed &min( Fixed &F1, Fixed &F2);
		static const Fixed &min( const Fixed &F1, const Fixed &F2);


		static Fixed &max( Fixed &F1, Fixed &F2);
		static const Fixed &max( const Fixed &F1, const Fixed &F2);
	private:
		int					fixedNbr;
		static const int	fractBits;
};

std::ostream	&operator<<( std::ostream &out, const Fixed & );

#endif