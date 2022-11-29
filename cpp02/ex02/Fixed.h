//
// Created by Selim talha Aksoy on 11/28/22.
//

#ifndef FIXED_H
#define FIXED_H

# include <iostream>
# include <cmath>

# define floatToFixed(x) (x * (float)(1 << nbrBits))
# define fixedToFloat(x) ((float)x / (float)(1 << nbrBits))

class Fixed {
private:
	int nbr;
	static const int nbrBits = 8;
public:
	Fixed();
	Fixed(const Fixed& var);
	Fixed(int getNum);
	Fixed(float getFloat);
	int getRawBits(void)const;
	void setRawBits(int const raw);
	int	toInt() const;
	float toFloat() const;
	Fixed &operator = (const Fixed &other); // overload

	bool operator == (const Fixed &var) const; // check
	bool operator != (const Fixed &var) const; // check
	bool operator < (const Fixed &var) const; // check
	bool operator > (const Fixed &var) const; // check
	bool operator >= (const Fixed &var) const; //check
	bool operator <= (const Fixed &var) const; // check

	Fixed operator + (const Fixed &var) const; // check
	Fixed operator - (const Fixed &var) const; // check
	Fixed operator / (const Fixed &var) const; // check
	Fixed operator * (const Fixed &var) const; // check

	Fixed &operator++();// check ++a
	Fixed operator++ (int); // check a++
	Fixed &operator--(); // check
	Fixed operator--(int); // check

	static	Fixed &min(Fixed& a, Fixed& b); // check
	static	Fixed &max(Fixed& a, Fixed& b); // check
	static const	Fixed &min(const Fixed& a,const Fixed& b); // check
	static const	Fixed &max(const Fixed& a,const Fixed& b); // check

	~Fixed();
};

std::ostream &operator << (std::ostream &os, const Fixed &a);

#endif //FIXED_H
