/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:12:35 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/30 21:23:37 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
class Awesome
{
    public:
        Awesome( void ) : _n( 42 ) { return; }
        int get( void ) const { return this->_n; }
    private:
        int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) 
{ 
    std::cout << x << std::endl;
    return;
}

// int main( void )
// {
//     int arr[4] = {1, 2 ,3, 4};
//     ::iter(arr, 4, increment);
//     for ( int i = 0; i < 4; i++ )
//         std::cout << arr[i] << std::endl;
// }


int main() {
    int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
    Awesome tab2[5];
    iter( tab, 5, print );
    iter( tab2, 5, print );
    return 0;
}