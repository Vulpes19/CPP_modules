/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:55:14 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/25 15:55:30 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <stdint.h>


typedef struct
{
    int x;
    int y;
} vector;

uintptr_t serialize( vector *ptr );
vector    *deserialize( uintptr_t raw );

#endif