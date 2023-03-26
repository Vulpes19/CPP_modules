/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:22:22 by abaioumy          #+#    #+#             */
/*   Updated: 2023/03/26 17:08:09 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class RPN
{
    public:
        RPN( void );
        RPN( const RPN &copy );
        ~RPN( void );
        RPN &operator=( const RPN &copy );
        void    readExpression( const char *exp );
        bool    operate( char operation );
    private:
        std::stack<int> _expression;
};