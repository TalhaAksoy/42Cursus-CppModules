//
// Created by Selim talha Aksoy on 11/28/22.
//
#include "Fixed.h"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	return 0;
}