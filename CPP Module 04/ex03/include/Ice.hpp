/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:26:10 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/20 14:53:15 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice( void );
        Ice( const Ice & );
        Ice &operator=( const Ice & );
        ~Ice( void );
        Ice *clone( void ) const;
        void    use( ICharacter &target );
};

#endif