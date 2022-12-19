/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:22:13 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/19 17:14:40 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int main( void )
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    //Character
    ICharacter* me = new Character("me");

    //Materias
    AMateria* tmp;

    //Creating Materias
    tmp = src->createMateria("ice");
    me->equip(tmp);
    me->equip(tmp);
    tmp = src->createMateria("cure");

    //equipping Materias
    me->equip(tmp);
    me->equip(tmp);

    //Character
    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);

    //unequipping Materia index = 0
    me->unequip(0);
    me->use(0, *bob);
    
    delete bob;
    delete me;
    delete src;
    system( "leaks Interface");
    return 0;
}