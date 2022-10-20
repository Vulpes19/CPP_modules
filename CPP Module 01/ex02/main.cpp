/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:27:38 by codespace         #+#    #+#             */
/*   Updated: 2022/10/18 14:25:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string test = "aa";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "string address: " << &str << std::endl;
	std::cout << "stringPTR address: " << &stringPTR << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;

	std::cout << " " << std::endl;

	std::cout << "string value: " << str << std::endl;
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl;

	stringPTR = &test;
	stringREF = str;
	std::cout << " " << std::endl;

	std::cout << "string address: " << &str << std::endl;
	std::cout << "stringPTR address: " << &stringPTR << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;

	std::cout << " " << std::endl;

	std::cout << "string value: " << str << std::endl;
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl;
}