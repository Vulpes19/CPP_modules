/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:24:45 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/25 17:49:45 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
class Base
{
    public:
        virtual ~Base( void ) {};
        Base    *generate( void );
        void    identify( Base *p );
        void    identify( Base &p );
};

#endif