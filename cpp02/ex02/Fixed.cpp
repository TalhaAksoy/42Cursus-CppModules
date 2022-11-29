//
// Created by Selim talha Aksoy on 11/28/22.
//

#include "Fixed.h"

Fixed::Fixed():nbr(0){
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(int getNum) {
	std::cout << "Integer Constructor Called" << std::endl;
	this->nbr = floatToFixed(getNum);
	std::cout << "a " << this->nbr << std::endl;
}

Fixed::Fixed(float getFloat) {
	std::cout << "Float Constructor Called " <<  std::endl;
	this->nbr = roundf(floatToFixed(getFloat));
	std::cout << "b " << this->nbr << std::endl;
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

int Fixed::toInt() const {
	return (this->nbr >> this->nbrBits);
}

float Fixed::toFloat() const {
	return (fixedToFloat(this->nbr));
}

std::ostream &operator << (std::ostream &os, const Fixed &a){
	return ( os << a.toFloat());
}

bool Fixed::operator!=(const Fixed &var) const {
	return (this->getRawBits() != var.getRawBits());
}

Fixed Fixed::operator*(const Fixed &var) const {
	return (this->getRawBits() * var.getRawBits());
}

Fixed Fixed::operator+(const Fixed &var) const {
	return (this->getRawBits() + var.getRawBits());
}

Fixed &Fixed::operator++() {
	++this->nbr;
	return(*this);
}

Fixed Fixed::operator++(int) {
	Fixed ret (*this);
	++*this;
	return (ret);
}

Fixed &Fixed::operator--() {
	--this->nbr;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed ret (*this);
	--*this;
	return (*this);
}

Fixed Fixed::operator-(const Fixed &var) const {
	return (this->getRawBits() - var.getRawBits());
}

Fixed Fixed::operator/(const Fixed &var) const {
	return (this->getRawBits() / var.getRawBits());
}

bool Fixed::operator==(const Fixed &var) const {
	return (this->getRawBits() == var.getRawBits());
}

bool Fixed::operator<(const Fixed &var) const {
	return (this->getRawBits() < var.getRawBits());
}

bool Fixed::operator>(const Fixed &var) const {
	return (this->getRawBits() > var.getRawBits());
}

bool Fixed::operator>=(const Fixed &var) const {
	return (this->getRawBits() >= var.getRawBits());
}

bool Fixed::operator<=(const Fixed &var) const {
	return (this->getRawBits() <= var.getRawBits());
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return(a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return (a > b ? a : b);
}