/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:11:50 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/20 14:29:33 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_HPP
#define IMATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource( void );
        MateriaSource( const MateriaSource & );
        MateriaSource   &operator= ( const MateriaSource & );
        ~MateriaSource( void );
        void    learnMateria( AMateria* );
        AMateria    *createMateria( std::string const &type );
    private:
        AMateria *materias[4];
};

#endif