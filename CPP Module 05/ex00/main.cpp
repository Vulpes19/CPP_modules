/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:45 by codespace         #+#    #+#             */
/*   Updated: 2022/12/23 16:38:52 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	try
	{
		Bureaucrat B( "Ayman", -1);
		Bureaucrat H("HIBA", 150);
		std::cout << B;
		std::cout << H;
		B.incrementGrade();
		std::cout << B;
	}
	catch ( std::exception &e )
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
