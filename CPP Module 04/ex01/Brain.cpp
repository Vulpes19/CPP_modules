/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:24:24 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/20 15:54:18 by abaioumy         ###   ########.fr       */
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

void    Brain::setIdea( std::string idea, int index )
{
    ideas[index] = idea;
}

std::string Brain::getIdea( int index )
{
    return (ideas[index]);
}

Brain::~Brain( void )
{
    std::cout << "Brain destructor is called" << std::endl;
}
