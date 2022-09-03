/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:14:11 by abaioumy          #+#    #+#             */
/*   Updated: 2022/09/03 18:01:02 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	int         phone_nbr;
	std::string darkest_secret;
public:
	std::string		gset_FirstName(std::string str);
	std::string		gset_LastName(std::string str);
	std::string		gset_nickname(std::string str);
	int				gset_PhoneNbr(int nbr);
	std::string		gset_DarkestSecret(std::string str);
};

#endif
