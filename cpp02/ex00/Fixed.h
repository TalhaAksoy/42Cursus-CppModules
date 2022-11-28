//
// Created by Selim talha Aksoy on 11/28/22.
//

#ifndef FIXED_H
#define FIXED_H

# include <iostream>

class Fixed {
private:
	int nbr;
	static const int nbrBits = 8;
public:
	Fixed();
	Fixed(const Fixed& var);
	int getRawBits(void)const;
	void setRawBits(int const raw);
	Fixed &operator = (const Fixed &other); // overload
	~Fixed();
};


#endif //FIXED_H
