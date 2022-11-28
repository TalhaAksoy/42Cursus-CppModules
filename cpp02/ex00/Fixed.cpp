//
// Created by Selim talha Aksoy on 11/28/22.
//

#include "Fixed.h"

Fixed::Fixed():nbr(0){
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &var) {
	std::cout << "Copy constructor called" << std::endl;
	*this = var;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->nbr = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nbr);
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBit member function called" << std::endl;
	this->nbr = raw;
}