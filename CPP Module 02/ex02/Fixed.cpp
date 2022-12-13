/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:24:26 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/13 14:39:04 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractBits = 8;

Fixed::Fixed( void ) : fixedNbr(0)
{
}

Fixed::Fixed( const Fixed &F )
{
	fixedNbr = F.fixedNbr;
}

Fixed::Fixed( const int nbr )
{
	fixedNbr = nbr << Fixed::fractBits;
}

Fixed::Fixed( const float nbr )
{
	fixedNbr = roundf(nbr * (1 << Fixed::fractBits));
}

Fixed::~Fixed( void )
{
}

Fixed	&Fixed::operator=( const Fixed &F )
{
	if (this != &F)
	{
		this->fixedNbr = F.fixedNbr;
	}
	return (*this);
}

Fixed	Fixed::operator+ ( const Fixed &F ) const
{
	Fixed ret;
	ret.fixedNbr = (this->toFloat() + F.toFloat()) * (1 << Fixed::fractBits);
	return (ret); 
}

Fixed	Fixed::operator- ( const Fixed &F ) const
{
	Fixed ret;
	ret.fixedNbr = (this->toFloat() - F.toFloat()) * (1 << Fixed::fractBits);
	return (ret); 
}

Fixed	Fixed::operator* ( const Fixed &F ) const
{
	Fixed ret;
	ret.fixedNbr = (this->toFloat() * F.toFloat()) * (1 << Fixed::fractBits);
	return (ret); 
}

Fixed	Fixed::operator/ ( const Fixed &F ) const
{
	Fixed ret;
	ret.fixedNbr = (this->toFloat() / F.toFloat()) * (1 << Fixed::fractBits);
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
	F.fixedNbr = this->fixedNbr;
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
	F.fixedNbr = this->fixedNbr;
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
	return((float)fixedNbr / (1 << Fixed::fractBits));
}

int	Fixed::toInt( void ) const
{
	return (fixedNbr >> Fixed::fractBits);
}

bool	Fixed::operator== ( const Fixed &F1 ) const
{
	return (F1.fixedNbr == this->fixedNbr);
}

bool	Fixed::operator!= ( const Fixed &F1 ) const
{
	return (F1.fixedNbr != this->fixedNbr);
}

bool	Fixed::operator< ( const Fixed &F1 ) const
{
	return (this->fixedNbr < F1.fixedNbr);
}

bool	Fixed::operator> ( const Fixed &F1 ) const
{
	return (this->fixedNbr > F1.fixedNbr);
}

bool	Fixed::operator<= ( const Fixed &F1 ) const
{
	return (this->fixedNbr <= F1.fixedNbr);
}

bool	Fixed::operator>= ( const Fixed &F1 ) const
{
	return (this->fixedNbr >= F1.fixedNbr);
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