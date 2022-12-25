/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:25:01 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/25 18:13:57 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
#define CLASSES_HPP

#include "Base.hpp"

class A : public Base
{
    public:
        A( void) {};
        const char  *whoAmI( void ) const;
};

class B : public Base
{
    public:
        B( void) {};
        const char  *whoAmI( void ) const;
};

class C : public Base
{
    public:
        C( void ) {};
        const char  *whoAmI( void ) const;
};

#endif