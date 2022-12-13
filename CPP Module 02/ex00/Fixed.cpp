/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:51:18 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/13 15:05:27 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractBits = 8;

Fixed::Fixed( void ): fixedNbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &F )
{
	std::cout << "Copy constructor called" << std::endl;
	fixedNbr = F.fixedNbr;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator= ( const Fixed &F )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &F)
	{
		fixedNbr = F.fixedNbr;
	}
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits memeber function called" << std::endl;
	return (fixedNbr);
}