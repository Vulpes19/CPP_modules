/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:23:18 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/25 15:55:41 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.hpp"

uintptr_t serialize( vector *ptr )
{
    return ( reinterpret_cast<uintptr_t>(ptr) );
}

vector    *deserialize( uintptr_t raw )
{
    return ( reinterpret_cast<vector*>(raw) );
}