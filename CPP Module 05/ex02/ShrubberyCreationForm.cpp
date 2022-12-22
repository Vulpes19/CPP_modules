/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:30:47 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/22 14:19:57 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( Form &form) : Form(form)
{
    std::string fileName = form.getName();
    if (form.getGradeSign() == 145 && form.getGradeExec() == 137)
        createFile( fileName.append("_shrubbery"));
}    

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{}

void    ShrubberyCreationForm::createFile( std::string &fileName )
{
    std::ofstream   file( fileName );

    if (file.is_open())
    {
        file << "        **\n";
        file << "       ****\n";
        file << "      ******\n";
        file << "     ********\n";
        file << "       ****\n";
        file << "    **********\n";
        file << "   ************\n";
        file << "  **************\n";
        file << " ****************\n";
        file << "        **\n";
        file << "        **\n";
        file << "        **\n";
        file.close();
    }
    else
        std::cerr << "can't open file" << std::endl;
}