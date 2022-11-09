/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Min.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:07:34 by codespace         #+#    #+#             */
/*   Updated: 2022/11/09 11:33:49 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_HPP
#define MIN_HPP

template <typename type>

type    min( type p1, type p2 )
{
    if ( p1 == p2 )
        return (p2);
    return (p1 > p2) ? p2 : p1;
}
#endif