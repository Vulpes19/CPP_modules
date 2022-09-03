/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:28:39 by abaioumy          #+#    #+#             */
/*   Updated: 2022/09/03 17:49:42 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "PhoneBook.hpp"

int main(int ac, char **av)
{
    std::string input;
    PhoneBook   phonebook;
    int         index;

    index = 0;
    while (true)
    {
        std::cin >> input;
        if (input == "ADD")
        {
            phonebook.ft_add(index);
            index++;
            if (index == 7)
                index = 0;
        }
        else if (input == "SEARCH")
            phonebook.ft_search();
        else if (input == "EXIT")
            phonebook.ft_exit();
        else
            std::cout << "you can only enter (ADD) or (SEARCH) or (EXIT)" << std::endl;
    }    
}
