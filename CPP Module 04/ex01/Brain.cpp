/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:24:24 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/19 19:33:23 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain is created" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
}

Brain::Brain( const Brain &B )
{
    std::cout << "Brain copy constructor is called" << std::endl;
    *this = B;
}

Brain   &Brain::operator= ( const Brain &B )
{
    std::cout << "Brain copy assignement operator is called" << std::endl;
    if (this != &B)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = B.ideas[i];
    }
    return (*this);
}

Brain::~Brain( void )
{
    std::cout << "Brain destructor is called" << std::endl;
}
