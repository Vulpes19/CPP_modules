/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:45 by codespace         #+#    #+#             */
/*   Updated: 2022/12/24 14:22:32 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )
{
	Bureaucrat Ayman( "Ayman", 1);
	ShrubberyCreationForm shrubbery("home");

	shrubbery.beSigned(Ayman);
	Ayman.signForm(shrubbery);
	shrubbery.execute(Ayman);

	Bureaucrat mayor("jurgen", 4);
	PresidentialPardonForm presidentForm("prisoner");

	presidentForm.beSigned(mayor);
	mayor.signForm(presidentForm);
	presidentForm.execute(mayor);

	Bureaucrat	person("mynamejeff", 2);
	RobotomyRequestForm RobotForm("peepeepoopoo");

	RobotForm.beSigned(person);
	person.signForm(RobotForm);
	RobotForm.execute(person);
	return (0);
}
