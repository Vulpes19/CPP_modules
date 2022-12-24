/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:45 by codespace         #+#    #+#             */
/*   Updated: 2022/12/24 14:07:12 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	try
	{
	Bureaucrat B( "Ayman", 9);
	Bureaucrat H("Hiba", 2);

	// H = B;
	std::cout << B << std::endl;
	std::cout << H << std::endl;
	Form F("form1", 10, 20);
	Form F2("form2", 2, 3);
	F = F2;
	std::cout << F << std::endl;
	std::cout << "**********" << std::endl;
	std::cout << F2 << std::endl;
	std::cout << "**********" << std::endl;
	F.beSigned(B);
	F.beSigned(H);
	// F2.beSigned(B);
	F2.beSigned(H);
	std::cout << "**********" << std::endl;
	std::cout << F << std::endl;
	B.signForm(F);
	H.signForm(F);
	B.signForm(F2);
	H.signForm(F2);
	}
	catch( std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
