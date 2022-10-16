/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:28:49 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/15 19:31:52 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		std::string	fixLength(std::string str);
		void		addContact(Contact contact, int index) {contacts[index] = contact;};
		void		printTable(void);
		void		searchContact(int index);
	private:
		Contact contacts[8];
};

#endif