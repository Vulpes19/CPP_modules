/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:45 by codespace         #+#    #+#             */
/*   Updated: 2022/12/24 13:45:14 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{

	//will throw grade too high exception
	try
	{
		Bureaucrat B( "mynamejeff", 0);
		std::cout << B << std::endl;
	}
	catch ( std::exception &e )
	{
		std::cerr << e.what() << std::endl;
	}

	//will throw grade too low exception
	try
	{
		Bureaucrat B( "mynamejeff", 160);
		std::cout << B << std::endl;
	}
	catch ( std::exception &e )
	{
		std::cerr << e.what() << std::endl;
	}
	//can't increment grade is too high
	try
	{
		Bureaucrat B( "mynamejeff", 1);
		std::cout << B << std::endl;
		B.incrementGrade();
	}
	catch ( std::exception &e )
	{
		std::cerr << e.what() << std::endl;
	}


	//can't decrement grade is too low
	try
	{
		Bureaucrat H("mynamejeff", 150);
		std::cout << H << std::endl;
		H.decrementGrade();
	}
	catch ( std::exception &e )
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
