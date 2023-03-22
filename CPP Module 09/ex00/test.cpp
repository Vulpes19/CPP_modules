#include <cstdlib>
#include <iostream>

int main( void )
{
    const char *ptr = "";
    char *end;
    long ret = strtol( ptr, &end, 10 );
    if ( end == NULL )
        std::cout << "Im empty\n";
    std::cout << ret << std::endl;
    return (0);
}