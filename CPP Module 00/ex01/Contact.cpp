/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:46:26 by abaioumy          #+#    #+#             */
/*   Updated: 2022/09/03 18:12:15 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string    Contact::gset_FirstName(std::string str)
{
    if (str == "none")
        return (first_name);
    first_name = str;
    return (first_name);
}

std::string    Contact::gset_LastName(std::string str)
{
    if (str == "none")
        return (last_name);
    last_name = str;
    return (last_name);
}

std::string    Contact::gset_nickname(std::string str)
{
    if (str == "none")
        return (nickname);
    nickname = str;
    return (nickname);
}

int    Contact::gset_PhoneNbr(int nbr)
{
    if (nbr == 0)
        return (phone_nbr);
    phone_nbr = nbr;
    return (phone_nbr);
}

std::string    Contact::gset_DarkestSecret(std::string str)
{
    if (str == "none")
        return (darkest_secret);
    darkest_secret = str;
    return (darkest_secret);
}
