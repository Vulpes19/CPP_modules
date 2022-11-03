/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:12:45 by codespace         #+#    #+#             */
/*   Updated: 2022/11/03 11:27:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream &operator<<( std::ostream &out, Bureaucrat &B)
{
	out << B.getName() << ", " << "bureaucrat grade is ";
	out << B.getGrade() << std::endl;
	return (out);
}

int	main( void )
{
	Bureaucrat B( "Ayman", 20);
	Bureaucrat H("HIBA", 160);
	std::cout << B;
	return (0);
}
