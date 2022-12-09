/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:51:23 by codespace         #+#    #+#             */
/*   Updated: 2022/12/09 15:58:56 by abaioumy         ###   ########.fr       */
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
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int					fixedNbr;
		static const int	fractBits;
};

std::ostream	&operator<<( std::ostream &out, const Fixed &F);

#endif