/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:25:08 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/26 15:04:45 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Classes.hpp"

int main( void )
{
    Base *ptr;

    ptr = generate();
    identify(ptr);
    identify(*ptr);
}