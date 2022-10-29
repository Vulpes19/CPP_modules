/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:51:18 by codespace         #+#    #+#             */
/*   Updated: 2022/10/29 10:56:55 by codespace        ###   ########.fr       */
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
	fixedNbr = nbr;
}

Fixed::Fixed(const int nbr)
{
	fixedNbr = roundf(nbr);
	
}

Fixed::~Fixed()
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

}

int	Fixed::toInt( void ) const
{
		
}