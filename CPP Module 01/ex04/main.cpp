/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:05:33 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/05 10:23:17 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	betterSed(char *filename, char *s1, char *s2);

int main(int ac, char **av)
{
    if (ac == 4)
        betterSed(av[1], av[2], av[3]);
    else
        std::cerr << "<file_name> <s1> <s2>" << std::endl;
    return 0;
}