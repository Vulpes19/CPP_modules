/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:28:49 by abaioumy          #+#    #+#             */
/*   Updated: 2022/09/03 18:15:14 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];        
    public:
        Contact get_contact(int index);
        void    ft_PrintTable(Contact contact);
        void    ft_add(int index);
        void    ft_search(void);
        void    ft_exit(void);
        PhoneBook(void);
        ~PhoneBook(void);  
};

#endif