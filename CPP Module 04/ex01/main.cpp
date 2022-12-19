/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:53:17 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/19 19:39:55 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


// int	main( void )
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;
// 	system ("leaks Animal");
// 	return 0;
// }


int	main( void )
{
	/*Animal *a1 = new Dog();
	Animal *a2 = new Dog();*/
	Animal *a3 = new Cat();
	Animal *a4 = new Cat();
	a3 = a4;
	/*Animal *A[4] = { a1, a2, a3, a4};
	for (int i = 0; i < 4; i++)
		delete A[i];*/
	system ("leaks Animal");
	return 0;
}