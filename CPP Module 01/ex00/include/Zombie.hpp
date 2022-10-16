/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:41:25 by codespace         #+#    #+#             */
/*   Updated: 2022/10/16 20:05:58 by codespace        ###   ########.fr       */
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