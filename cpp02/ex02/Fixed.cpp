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
}

Fixed::Fixed(float getFloat) {
	std::cout << "Float Constructor Called " <<  std::endl;
	this->nbr = roundf(floatToFixed(getFloat));
}

Fixed::Fixed(const Fixed &var) {
	*this = var;
}

Fixed::~Fixed() {
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other)
		this->nbr = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const {
	return (this->nbr);
}

void Fixed::setRawBits(const int raw) {
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
	Fixed ret;

	ret.setRawBits(this->nbr * var.nbr >> this->nbrBits);
	return ret;
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
	Fixed ret;

	ret.setRawBits((this->nbr * (1 << this->nbrBits)) / var.nbr);
	return ret;
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