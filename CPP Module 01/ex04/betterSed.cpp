/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   betterSed.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:05:27 by codespace         #+#    #+#             */
/*   Updated: 2022/10/20 13:05:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <string.h>
#include <iostream>

std::string toString(char *av)
{
    std::string ret;

    ret = "";
    for (int i = 0; av[i]; i++)
        ret = ret + av[i];
    return (ret);
}

void	searchLine(std::string &fileContent, std::string toReplace, std::string toPlace)
{
	int	index = fileContent.find(toReplace);

	while (index != -1)
	{
		fileContent.erase(index, toReplace.length());
		fileContent.insert(index, toPlace);
		index = fileContent.find(toReplace);
	}
}

void	betterSed(char *filename, char *s1, char *s2)
{
	std::string	toReplace = toString(s1);
	std::string	toPlace = toString(s2);
	std::string fileContent;
	std::ifstream myFile;
	std::ofstream result;

	myFile.open(filename);
	result.open(strcat(filename, "_edited"));
	if (myFile.is_open())
	{
		while (myFile)
		{
			if (!std::getline(myFile, fileContent))
				break ;
			std::cout << "line of file: " << fileContent << std::endl;
			searchLine(fileContent, toReplace, toPlace);
			result << fileContent;
			result << '\n';
			std::cout << "after editing " << fileContent << std::endl;
		}
	}
	else
		std::cerr << "can't open file :(" << std::endl;
	myFile.close();
}