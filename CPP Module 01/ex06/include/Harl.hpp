/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:13:30 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/21 10:48:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	public:
		void	complain( std::string level );
		void	DEBUG(void) { debug(); };
		void	INFO( void ) { info(); };
		void	WARNING( void ) { warning(); };
		void	ERROR( void ) { error(); };
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif