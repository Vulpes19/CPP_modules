/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:41:25 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/17 10:33:44 by abaioumy        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie(std::string in);
        ~Zombie();
        Zombie *newZombie( std::string name );
        void    randomChump( std::string name );
        void    anounce( void );
    private:
        std::string name;
};

#endif