/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:22:13 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/21 20:56:40 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int main( void )
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    MateriaSource  copy;
    MateriaSource   copy2;

    copy.learnMateria( new Ice());
    copy2 = copy;

    copy.learnMateria(new Cure());
    //Character
    ICharacter* me = new Character("me");

    //Materias
    AMateria* tmp;
    AMateria* tmp2;

    std::cout << "copy2: ";
    tmp2 = copy2.createMateria("ice");
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
    // ICharacter* bob2 = new Character("bob2");

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
    // delete copy;
    system( "leaks Interface");
    return 0;
}