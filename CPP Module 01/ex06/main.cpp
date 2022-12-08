/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:13:26 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/21 10:39:05 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

std::string toString(char *av)
{
    std::string ret;

    ret = "";
    for (int i = 0; av[i]; i++)
        ret = ret + av[i];
    return (ret);
}

int	main( int ac, char **av )
{
	if ( ac == 2)
	{
		Harl H;
		H.complain( toString( av[1] ));
	}
	else
		std::cerr << "<./harlFilter> <your complain>" << std::endl;
	return (0);
}