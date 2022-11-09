/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Swap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:07:13 by codespace         #+#    #+#             */
/*   Updated: 2022/11/09 11:33:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_HPP
#define SWAP_HPP

template <typename type>

void    swap( type &p1, type &p2 )
{
    type tmp = p1;

    p1 = p2;
    p2 = tmp;
}

#endif