/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:24:26 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/11 17:40:49 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractBits = 8;

Fixed::Fixed( void ) : fixedNbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &F )
{
	std::cout << "Copy constructor called" << std::endl;
	fixedNbr = F.fixedNbr;
}

Fixed::Fixed( const int nbr )
{
	std::cout << "Int constructor called" << std::endl;
	fixedNbr = nbr * 256.0f;
}

Fixed::Fixed( const float nbr )
{
	std::cout << "Float constructor called" << std::endl;
	fixedNbr = roundf(nbr * 256.0f);
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=( const Fixed &F )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &F)
	{
		this->fixedNbr = F.fixedNbr;
	}
	return (*this);
}

Fixed	Fixed::operator+ ( const Fixed &F ) const
{
	Fixed ret;
	ret.setRawBits( ((this->fixedNbr / 256.0f) + (F.getRawBits() / 256.0f)) * 256.0f );
	return (ret); 
}

Fixed	Fixed::operator- ( const Fixed &F ) const
{
	Fixed ret;
	ret.setRawBits( ((this->fixedNbr / 256.0f) - (F.getRawBits() / 256.0f)) * 256.0f );
	return (ret); 
}

Fixed	Fixed::operator* ( const Fixed &F ) const
{
	Fixed ret;
	ret.setRawBits( ((this->fixedNbr / 256.0f) * (F.getRawBits() / 256.0f)) * 256.0f );
	return (ret); 
}

Fixed	Fixed::operator/ ( const Fixed &F ) const
{
	Fixed ret;
	ret.setRawBits( ((this->fixedNbr / 256.0f) / (F.getRawBits() / 256.0f)) * 256.0f );
	return (ret); 
}

Fixed	&Fixed::operator++ ( void )
{
	this->fixedNbr += 1;
	return (*this);
}

Fixed	Fixed::operator++ ( int )
{
	Fixed F;
	F.setRawBits(this->fixedNbr);
	this->fixedNbr++;
	return (F);
}

Fixed	&Fixed::operator-- ( void )
{
	this->fixedNbr -= 1;
	return (*this);
}

Fixed	Fixed::operator-- ( int )
{
	Fixed F;
	F.setRawBits(this->fixedNbr);
	this->fixedNbr--;
	return (F);
}


int	Fixed::getRawBits( void ) const
{
	return (fixedNbr);
}

void	Fixed::setRawBits( int const raw)
{
	fixedNbr = raw;
}

float	Fixed::toFloat( void ) const
{
	return(fixedNbr / 256.0f);
}

int	Fixed::toInt( void ) const
{
	return (fixedNbr / 256.0f);
}

bool	Fixed::operator== ( const Fixed &F1 ) const
{
	return (F1.getRawBits() == this->fixedNbr);
}

bool	Fixed::operator!= ( const Fixed &F1 ) const
{
	return (F1.getRawBits() !=this->fixedNbr);
}

bool	Fixed::operator< ( const Fixed &F1 ) const
{
	return (F1.getRawBits() > this->fixedNbr);
}

bool	Fixed::operator> ( const Fixed &F1 ) const
{
	return (F1.getRawBits() < this->fixedNbr);
}

bool	Fixed::operator<= ( const Fixed &F1 ) const
{
	return (F1.getRawBits() <= this->fixedNbr);
}

bool	Fixed::operator>= ( const Fixed &F1 ) const
{
	return (F1.getRawBits() >= this->fixedNbr);
}

Fixed &Fixed::min( Fixed &F1, Fixed &F2 )
{
	if ( F1 > F2)
		return (F2);
	else
		return (F1);
}


const Fixed &Fixed::min( const Fixed &F1, const Fixed &F2 )
{
	if ( F1 > F2)
		return (F2);
	else
		return (F1);
}

Fixed &Fixed::max( Fixed &F1, Fixed &F2 )
{
	if ( F1 > F2)
		return (F1);
	else
		return (F2);
}


const Fixed &Fixed::max( const Fixed &F1, const Fixed &F2 )
{
	if ( F1 > F2)
		return (F1);
	else
		return (F2);
}

std::ostream	&operator<< ( std::ostream &out, const Fixed &F )
{
	out << F.toFloat();
	return (out);
}