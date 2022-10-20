#include <iostream>
#include <fstream>
#include <string>

void	betterSed(char *filename, char *s1, char *s2);

int main(int ac, char **av)
{
    if (ac == 4)
        betterSed(av[1], av[2], av[3]);
    else
        std::cerr << "<file_name> <s1> <s2>" << std::endl;
    return 0;
}