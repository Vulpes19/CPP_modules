/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:57:15 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/20 14:53:09 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure( void );
        Cure( const Cure & );
        Cure    &operator=( const Cure & );
        ~Cure( void );
        Cure *clone( void ) const;
        void    use( ICharacter &target );
};

#endif