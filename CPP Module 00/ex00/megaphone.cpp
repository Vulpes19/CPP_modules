/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:53:56 by abaioumy          #+#    #+#             */
/*   Updated: 2022/11/26 12:20:32 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string ft_convert_to_string(char *av)
{
    std::string ret;

    ret = "";
    for (int i = 0; av[i]; i++)
        ret = ret + av[i];
    return (ret);
}

int main(int ac, char **av)
{
    char        ch;
    std::string str;
    int         len;

    len = 0;
    ch = '0';
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; av[i]; i++)
    {
        str = ft_convert_to_string(av[i]);
        len = str.length();
        for (int j = 0; j < len; j++)
        {
            ch = toupper(str[j]);
            std::cout << ch;
        }
    }
    std::cout << std::endl;
    return (0);
}
