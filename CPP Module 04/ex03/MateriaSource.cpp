/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:07:56 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/21 21:04:53 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : IMateriaSource()
{
    std::cout << "MateriaSource is created" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        materias[i] = NULL;
    }
}

MateriaSource::MateriaSource( const MateriaSource &newMateriaSource )
{
    std::cout << "MateriaSource copy constructor is called" << std::endl;
    *this = newMateriaSource;
}

MateriaSource   &MateriaSource::operator= ( const MateriaSource &newMateriaSource )
{
    std::cout << "MateriaSource copy assignement operator is called" << std::endl;
    if (this != &newMateriaSource)
    {
        AMateria *newMaterias[4];
        for (int i = 0; i < 4; i++)
        {
            if (newMateriaSource.materias[i])
                newMaterias[i] = newMateriaSource.materias[i]->clone();
            else
                newMaterias[i] = NULL;
        }
        for (int i = 0; i < 4; i++)
        {
            delete materias[i];
        }
        for (int i = 0; i < 4; i++)
        {
            materias[i] = newMaterias[i];
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource( void )
{
    std::cout << "MateriaSource is destroyed" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete materias[i];
    }
}

void    MateriaSource::learnMateria( AMateria *newMateria )
{
    if ( newMateria == NULL )
    {
        std::cout << "Unable to learn this Materia" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] == NULL)
        {
            std::cout << "learned Materia " << newMateria->getType() << " successfully" << std::endl;
            materias[i] = newMateria;
            break ;
        }
    }
}

AMateria    *MateriaSource::createMateria( std::string const &type )
{
    for (int i = 0; i < 4; i++)
    {
        if ( materias[i] && materias[i]->getType() == type )
        {
            std::cout << "The Materia is created succesfully" << std::endl;
            return (materias[i]);
        }
    }
    std::cout << "Unable to create this Materia, couldn't find this type" << std::endl;
    return (0);
}
