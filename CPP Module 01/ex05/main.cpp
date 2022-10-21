/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:05:42 by codespace         #+#    #+#             */
/*   Updated: 2022/10/21 10:08:29 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main()
{
   Harl h;

   h.complain("DEBUG");
   h.complain("INFO");
   h.complain("DEBUG");
   h.complain("ERROR");
}