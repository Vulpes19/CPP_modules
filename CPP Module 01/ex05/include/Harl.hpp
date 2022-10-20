/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:05:50 by codespace         #+#    #+#             */
/*   Updated: 2022/10/20 14:31:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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