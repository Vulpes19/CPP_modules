/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:28:49 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/15 17:44:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void	addContact(Contact contact, int index) {contacts[index] = contact;};
		void	printTable(void);
		// void	searchContact(int index) {std::cout << "I got the index" << std::endl;};
	private:
		Contact contacts[8];
};

#endif