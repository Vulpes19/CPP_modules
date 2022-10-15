/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:14:11 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/15 19:35:52 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

enum word {LIST, NO_LIST};

class Contact
{
	public:
		void set_firstName(std::string str) {firstName = str;}; //setter
		std::string get_firstName(void) {return (firstName);}; //getter

		void set_lastName(std::string str) {lastName = str;};
		std::string get_lasttName(void) {return (lastName);};

		void set_nickname(std::string str) {nickname = str;};
		std::string get_nickname(void) {return (nickname);};

		void set_number(std::string nbr) {number = nbr;};
		std::string get_number(void) {return (number);};

		void set_darkestSecret(std::string str) {darkestSecret = str;};
		std::string get_darkestSecret(void) {return (darkestSecret);};
		
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	number;
		std::string	darkestSecret;
};

#endif
