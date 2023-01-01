/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 15:34:48 by abaioumy          #+#    #+#             */
/*   Updated: 2023/01/01 16:20:49 by abaioumy         ###   ########.fr       */
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
        ~MutantStack( void )
        {};
        iterator    begin( void ) { return (this->c.begin()); };
        iterator    end( void ) { return (this->c.end()); };
};

#endif