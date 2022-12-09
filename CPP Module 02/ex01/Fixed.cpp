/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:51:18 by codespace         #+#    #+#             */
/*   Updated: 2022/12/09 16:09:41 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractBits = 8;

Fixed::Fixed(): fixedNbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &F)
{
	std::cout << "Copy constructor called" << std::endl;
	fixedNbr = F.fixedNbr;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	fixedNbr = nbr * 256;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	fixedNbr = roundf(nbr * 256);
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &F)
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

void	Fixed::setRawBits( int const raw)
{
	std::cout << "raw bits are set" << std::endl;
	fixedNbr = raw;
}

float	Fixed::toFloat( void ) const
{
	return(fixedNbr / 256.0);
}

int	Fixed::toInt( void ) const
{
	return (fixedNbr / 256);
}

std::ostream	&operator<<( std::ostream &out, const Fixed &F)
{
	out << F.toFloat();
	return (out);
}