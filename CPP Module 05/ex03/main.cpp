/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:45 by codespace         #+#    #+#             */
/*   Updated: 2022/12/23 14:55:37 by abaioumy         ###   ########.fr       */
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
	Bureaucrat Ayman( "Ayman", 1);
	ShrubberyCreationForm shrubbery("home");

	shrubbery.beSigned(Ayman);
	Ayman.signForm(shrubbery);
	shrubbery.execute(Ayman);

	Bureaucrat mayor("prisoner", 4);
	PresidentialPardonForm presidentForm("pisoner");

	presidentForm.beSigned(mayor);
	mayor.signForm(presidentForm);
	presidentForm.execute(mayor);

	Bureaucrat	person("mynamejeff", 2);
	RobotomyRequestForm RobotForm("peepeepoopoo");

	RobotForm.beSigned(person);
	person.signForm(RobotForm);
	RobotForm.execute(person);

	Intern  someRandomIntern;
    Form*   rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << rrf->getGradeExec();
	system("leaks Bureaucrat");
	return (0);
}
