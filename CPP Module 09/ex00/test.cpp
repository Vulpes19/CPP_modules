#include <iostream>
#include <sstream>

int main( void )
{
    std::string date = "2020-10-01,10.1";
    int y, m, d;
    double value;
    char space1, space2, delimiter;
    std::string pipe;

    std::istringstream iss(date);
    if ( iss >> y >> delimiter >> m >> delimiter >> d >> delimiter >> value )
    {
        std::cout << y << std::endl;
        std::cout << m << std::endl;
        std::cout << d << std::endl;
        std::cout << value << std::endl;
    }
    else
        std::cout << "error\n";
    return (0);
}