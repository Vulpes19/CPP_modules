/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:45 by codespace         #+#    #+#             */
/*   Updated: 2022/12/24 15:01:00 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main( void )
{
	try
	{
	Intern  someRandomIntern;
    Form*   rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
		std::cout << "name: " << rrf->getName() << std::endl;
    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	if (rrf)
		std::cout << "name: " << rrf->getName() << std::endl;
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	if (rrf)
		std::cout << "name: " << rrf->getName() << std::endl;
    rrf = someRandomIntern.makeForm("predfsdf", "Bender");
	if (rrf)
		std::cout << "name: " << rrf->getName() << std::endl;
	}
	catch ( std::exception &e )
	{
		std::cerr << e.what() << std::endl;
	}
	system("leaks Bureaucrat");
	return (0);
}
