/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:14:11 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/15 17:44:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	public:
		void set_firstName(std::string str); //setter
		std::string get_firstName(void) {return (firstName);}; //getter

		void set_lastName(std::string str);
		std::string get_lasttName(void) {return (lastName);};

		void set_nickname(std::string str);
		std::string get_nickname(void) {return (nickname);};

		void set_number(std::string nbr);
		std::string get_number(void) {return (number);};

		void set_darkestSecret(std::string str);
		std::string get_darkestSecret(void) {return (darkestSecret);};
		
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	number;
		std::string	darkestSecret;
};

#endif
