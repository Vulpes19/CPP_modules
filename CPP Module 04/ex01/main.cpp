/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:38:42 by codespace         #+#    #+#             */
/*   Updated: 2022/11/14 11:42:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/*
int	main( void )
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	return 0;
}
*/

int	main( void )
{
	Animal *a1 = new Dog();
	Animal *a2 = new Dog();
	Animal *a3 = new Cat();
	Animal *a4 = new Cat();
	Animal *A[4] = { a1, a2, a3, a4};
	for (int i = 0; i < 4; i++)
		delete A[i];
	return 0;
}