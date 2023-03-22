/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:33:15 by codespace         #+#    #+#             */
/*   Updated: 2023/03/22 18:08:42 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cstdlib>

RPN::RPN( void )
{}

RPN::RPN( const RPN &copy )
{
    _expression = copy._expression;
}

RPN::~RPN( void )
{}

RPN &RPN::operator=( const RPN &copy )
{
    if ( this != &copy )
    {
        _expression = copy._expression;
    }
    return (*this);
}

void    RPN::readExpression( const char *exp )
{
    for ( size_t i = 0; exp[i]; i++ )
    {
        if ( exp[i] == ' ' )
            continue ;
        else if ( exp[i] == '+' || exp[i] == '-' 
            || exp[i] == '/' || exp[i] == '*' )
        {
            operate( exp[i] );
        }
        else
        {
            const char *toConvert = exp + i;
            _expression.push(atoi(toConvert));
        }
    }
    std::cout << _expression.top() << std::endl;
}

void    RPN::operate( char operation )
{
    int n1 = _expression.top();
    _expression.pop();
    int n2 = _expression.top();
    _expression.pop();
    if ( operation == '+' )
        _expression.push(n2 + n1);
    else if ( operation == '-' )
        _expression.push(n2 - n1);
    else if ( operation == '*' )
        _expression.push(n2 * n1);
    else if ( operation == '/' )
        _expression.push(n2 / n1);
}