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
		void		addContact(Contact contact) {contacts[index] = contact;};
		void		printTable(void);
		void		searchContact( int index );
		void		inputContact( void );
		int			check_ifEmpty(Contact contact);
		void		setIndex( int in) { index = in; };
		int			getIndex( void ) { return (index); };
	private:
		Contact contacts[8];
		int		index;
};

#endif