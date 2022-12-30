/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 20:23:31 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/30 20:31:29 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class Span
{
    public:
        Span( void );
        Span( unsigned int );
        Span( const Span & );
        Span    &operator= ( const Span & );
        void    addNumber( unsigned int );
        void    shortestSpan( void );
        void    longestSpan( void );
    private:
        int *integers;
        int size;
};

#endif