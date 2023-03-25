/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:33:15 by codespace         #+#    #+#             */
/*   Updated: 2023/03/25 15:44:28 by abaioumy         ###   ########.fr       */
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
            if ( !operate( exp[i] ) )
                return ;
        }
        else
        {
            std::string toConvert;
            toConvert.assign(1, exp[i]);
            int nbr = atoi(toConvert.c_str());
            _expression.push(nbr);
        }
    }
    int result = _expression.top(); 
    _expression.pop();
    std::cout << result << std::endl;
}

bool    RPN::operate( char operation )
{
    int n1, n2;
    if ( _expression.empty() )
    {
        std::cerr << "Error\n";
        return (false);
    }
    n1 = _expression.top();
    _expression.pop();
    if ( _expression.empty() )
    {
        std::cerr << "Error\n";
        return (false);
    }
    n2 = _expression.top();
    _expression.pop();
    if ( operation == '+' )
        _expression.push(n2 + n1);
    else if ( operation == '-' )
        _expression.push(n2 - n1);
    else if ( operation == '*' )
        _expression.push(n2 * n1);
    else if ( operation == '/' )
        _expression.push(n2 / n1);
    return (true);
}