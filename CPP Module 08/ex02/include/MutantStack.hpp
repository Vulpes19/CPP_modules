/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 15:34:48 by abaioumy          #+#    #+#             */
/*   Updated: 2023/01/01 16:34:17 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>

class MutantStack : public std::stack<T, std::deque<T> >
{
    public:
        typedef typename std::deque<T>::iterator iterator;
        MutantStack( void ) : std::stack<T, std::deque<T> >()
        {};
        MutantStack( const MutantStack &newStack ) : std::stack<T, std::deque<T> >( newStack )
        {};
        MutantStack &operator= ( const MutantStack &newStack )
        {
            if ( this != &newStack )
            {
                this->c = newStack.c;
            }
            return (*this);
        };
        ~MutantStack( void )
        {};
        iterator    begin( void ) { return (this->c.begin()); };
        iterator    end( void ) { return (this->c.end()); };
};

#endif