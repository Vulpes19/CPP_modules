/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:22:22 by codespace         #+#    #+#             */
/*   Updated: 2023/03/24 17:38:26 by abaioumy         ###   ########.fr       */
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