/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:14:11 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/15 19:35:52 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

//colors
#define CYAN "\033[0;36m"
#define RED "\001\e[0;31m\002"
#define RESET "\001\e[0m\002"
#define YELLOW "\033[0;33m"

#include <iostream>

class Contact
{
	public:
		void set_firstName( std::string str );
		void set_lastName( std::string str );
		void set_nickname( std::string str );
		void set_number( std::string nbr );
		void set_darkestSecret( std::string str );

		std::string get_firstName( void );
		std::string get_lastName( void );
		std::string get_nickname( void );
		std::string get_number( void );
		std::string get_darkestSecret( void );
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	number;
		std::string	darkestSecret;
};

#endif
