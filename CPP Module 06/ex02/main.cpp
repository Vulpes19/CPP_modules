/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:25:08 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/25 18:11:31 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Classes.hpp"

int main( void )
{
    Base base;
    Base *ptr;

    ptr = base.generate();
    base.identify(ptr);
    base.identify(*ptr);
}