/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:07:56 by codespace         #+#    #+#             */
/*   Updated: 2022/11/14 12:12:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

IMateriaSource::IMateriaSource( void )
{
    std::cout << "IMateriaSource is created" << std::endl;
}

IMateriaSource::~IMateriaSource( void )
{
    std::cout << "IMateriaSource is destroyed" << std::endl;
}
