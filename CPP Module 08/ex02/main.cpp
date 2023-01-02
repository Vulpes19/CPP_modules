/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 15:34:59 by abaioumy          #+#    #+#             */
/*   Updated: 2023/01/02 10:01:49 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main( void )
{
    //push member function
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top of stack: " << mstack.top() << std::endl;
    // mstack.pop();
    MutantStack<int>::iterator print;

    std::cout << "printing stack elements: " << std::endl;
    for ( print = mstack.begin(); print != mstack.end(); ++print )
        std::cout << *print << std::endl;
    std::cout << "*******" << std::endl;
    std::cout << "size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    //iterators
    std::cout << "printing stack elements: " << std::endl;
    for ( print = mstack.begin(); print != mstack.end(); ++print )
    std::cout << *print << std::endl;
    std::cout << "*******" << std::endl;
    MutantStack<int>::iterator it = mstack.begin(); 
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << "iterator value: " << *it << std::endl;
    ++it; }

    //empty member function
    mstack.pop();
    mstack.pop();
    mstack.pop();
    mstack.pop();
    mstack.pop();
    if (mstack.empty())
        std::cout << "stack is empty" << std::endl;
    else
        std::cout << "stack isn't empty" << std::endl;
    std::stack<int> s(mstack);
}