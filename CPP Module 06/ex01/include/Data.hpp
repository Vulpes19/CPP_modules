#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>


typedef struct
{
    int nbr;
} Data;

uintptr_t serialize( Data *ptr );
Data    *deserialize( uintptr_t raw );

#endif