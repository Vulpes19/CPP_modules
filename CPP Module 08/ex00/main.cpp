/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:30:51 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/29 15:04:34 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <stack>
#include <list>
#include <deque>
#include <array>
#include <stdexcept>
#include "easyfind.hpp"

int main( void )
{
    /* VECTOR */
    std::vector<int> v;

    v.insert(v.end(), 1);
    v.insert(v.end(), 3);
    v.insert(v.end(), 4);
    v.insert(v.end(), 5);

    try
    {
        easyFind( v, 3);
    }
    catch ( const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    // std::stack<int> s;

    // s.push(1);
    // s.push(6);
    // s.push(4);
    // s.push(0);
    // s.push(2);
    // s.push(7);

    // try
    // {
    //     easyFind( s, 0);
    // }
    // catch ( const std::exception &e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    /* LIST */
    std::list<int> l;
    l.insert(l.end(), 4);
    l.insert(l.end(), 6);
    l.insert(l.end(), 1);
    l.insert(l.end(), 3);

    for ( std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    try
    {
        easyFind( l, 3);
    }
    catch ( const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    /* DEQUE */
    std::deque<int> d;
    d.insert(d.end(), 9);
    d.insert(d.end(), 1);
    d.insert(d.end(), 4);
    d.insert(d.end(), 5);
   for ( std::deque<int>::iterator it = d.begin(); it != d.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    try
    {
        easyFind( d, 5);
    }
    catch ( const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    /* ARRAY */
    std::array<int, 4> arr = {1 ,4 ,2 ,6 };
    try
    {
        easyFind( arr, 4);
    }
    catch ( const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

}