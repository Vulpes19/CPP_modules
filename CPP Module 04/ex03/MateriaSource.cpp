/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:07:56 by codespace         #+#    #+#             */
/*   Updated: 2022/12/18 20:23:06 by abaioumy         ###   ########.fr       */
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
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] == NULL)
        {
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
            return (materias[i]);
    }
    return (0);
}
