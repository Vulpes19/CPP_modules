/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:05:33 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/21 10:43:32 by codespace        ###   ########.fr       */
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