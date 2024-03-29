/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:25:47 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/26 15:04:34 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"
#include <cstdlib>
#include <ctime>

Base    *generate( void )
{
    std::srand(time(0));
    Base    *classA = new A();
    Base    *classB = new B();
    Base    *classC = new C();
    Base    *Classes[3] = { classA, classB, classC };
    int random = std::rand() % 3;

    for ( int i = 0; i < 3; i++ )
    {
        if ( i != random )
            delete Classes[i];
    }
    return (Classes[random]);
}

void    identify( Base *p )
{
    A   *classA = dynamic_cast<A*>(p);
    if ( classA )
        std::cout << "The pointer is pointing to the class A object" << std::endl;
    B   *classB = dynamic_cast<B*>(p);
    if ( classB )
        std::cout << "The pointer is pointing to the class B object" << std::endl;
    C   *classC = dynamic_cast<C*>(p);
    if ( classC )
        std::cout << "The pointer is pointing to the class C object" << std::endl;    
}

void    identify( Base &p )
{
    try
    {
        A   &classA = dynamic_cast<A&>(p);
        std::cout << classA.whoAmI() << std::endl;
    }
    catch(const std::exception& e)
    {}
    try
    {
        B   &classB = dynamic_cast<B&>(p);
        std::cout << classB.whoAmI() << std::endl;
    }
    catch(const std::exception& e)
    {}
    try
    {
        C   &classC = dynamic_cast<C&>(p);
        std::cout << classC.whoAmI() << std::endl;
    }
    catch(const std::exception& e)
    {}
}

const char  *A::whoAmI( void ) const
{
    return ("This is class A object");
}

const char  *B::whoAmI( void ) const
{
    return ("This is class B object");
}

const char  *C::whoAmI( void ) const
{
    return ("This is class C object");
}