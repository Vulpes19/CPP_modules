/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 20:23:31 by abaioumy          #+#    #+#             */
/*   Updated: 2023/01/01 18:11:34 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <iterator>
#include <vector>

class Span
{
    public:
        Span( void );
        Span( unsigned int );
        Span( const Span & );
        Span    &operator= ( const Span & );
        void    addNumber( unsigned int );
        void    addMoreNumbers( unsigned int, unsigned int );
        int     shortestSpan( void );
        int     longestSpan( void );
    private:
        std::vector<int> integers;
};

#endif