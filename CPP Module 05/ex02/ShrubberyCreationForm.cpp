/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:30:47 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/23 18:05:02 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form(), target("")
{}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ) : Form("Shrubbery creation", 137, 145)
{
    this->target = target;
}    

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy )
{
    *this = copy;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator= ( const ShrubberyCreationForm &copy)
{
    if (this != &copy)
    {
        target = copy.getName();
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{}

void    ShrubberyCreationForm::beSigned( Bureaucrat &B )
{
    Form::beSigned(B);
}

void    ShrubberyCreationForm::action( void ) const
{
    std::string fileName = target + "_shrubbery";
    std::ofstream   file;

    file.open(fileName.c_str());
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