/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:43:36 by codespace         #+#    #+#             */
/*   Updated: 2022/11/07 11:26:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

std::string convertArgv(char *av)
{
    std::string ret;

    ret = "";
    for (int i = 0; av[i]; i++)
        ret = ret + av[i];
    return (ret);
}

int	main( int ac, char **av )
{
	if ( ac == 2 )
		findType( convertArgv(av[1]) );
	else
		std::cerr << "./convert <argument>" << std::endl;
	return (0);
}