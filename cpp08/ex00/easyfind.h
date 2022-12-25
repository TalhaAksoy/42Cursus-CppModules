//
// Created by Selim talha Aksoy on 12/24/22.
//

# include <iostream>
# include <algorithm>

#pragma once


class elementNotFound:public std::exception{
public:
	const char* what() const throw(){
		return "Element Not Found";
	}
};

template <typename T>
typename T::iterator easyfind(T &container, int n) {
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw elementNotFound();
	return it;
}
