/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:51:23 by codespace         #+#    #+#             */
/*   Updated: 2022/10/22 14:56:49 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class   Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &);
		~Fixed();
		Fixed	&operator = (const Fixed &);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
	private:
		int					fixedNbr;
		static const int	nbrBits;
};

#endif