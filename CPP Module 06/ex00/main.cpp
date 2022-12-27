/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:43:36 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/26 18:35:02 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int	main( int ac, char **av )
{
	if ( ac == 2 )
    {
        std::string str(av[1]);
		findType( str );
    }
	else
		std::cerr << "./convert <argument>" << std::endl;
	return (0);
}