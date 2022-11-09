/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Max.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:10:08 by codespace         #+#    #+#             */
/*   Updated: 2022/11/09 11:33:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAX_HPP
#define MAX_HPP

template <typename type>

type    max( type p1, type p2 )
{
    if ( p1 == p2 )
        return (p2);
    return (p1 > p2) ? p1 : p2;
}

#endif