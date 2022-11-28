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
	~Fixed();
};

std::ostream &operator << (std::ostream &os, const Fixed &a);

#endif //FIXED_H
