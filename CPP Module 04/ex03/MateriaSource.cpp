/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:07:56 by codespace         #+#    #+#             */
/*   Updated: 2022/12/19 17:07:45 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : IMateriaSource()
{
    std::cout << "MateriaSource is created" << std::endl;
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource::~MateriaSource( void )
{
    std::cout << "MateriaSource is destroyed" << std::endl;
}

void    MateriaSource::learnMateria( AMateria *M )
{
    if ( M == NULL )
    {
        std::cout << "Unable to learn this Materia" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] == NULL)
        {
            std::cout << "learned Materia " << M->getType() << " successfully" << std::endl;
            materias[i] = M;
            break ;
        }
    }
}

AMateria    *MateriaSource::createMateria( std::string const &type )
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i]->getType() == type)
        {
            std::cout << "The Materia is created succesfully" << std::endl;
            return (materias[i]);
        }
    }
    std::cout << "Unable to create this Materia, couldn't find this type" << std::endl;
    return (0);
}
