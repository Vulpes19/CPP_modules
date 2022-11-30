#include "Data.hpp"

int main( void )
{
    Data *test;
    uintptr_t ptr;
    test = NULL;
    test->nbr = 9;
    ptr = serialize( test );
    test = deserialize( ptr );
    std::cout << test->nbr << std::endl;
}