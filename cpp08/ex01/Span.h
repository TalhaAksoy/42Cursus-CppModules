//
// Created by Selim talha Aksoy on 12/25/22.
//

#pragma once

# include <iostream>
# include <vector>
# include <algorithm>
# include <numeric>
# include <cstdlib>

class Span {
private:
	unsigned int N;
	std::vector<int> v;
public:
	Span();
	Span(unsigned int n);
	Span(const Span& var);
	Span& operator=(const Span& var);

	void addNumber(int number);
	int shortestSpan();
	int longestSpan();

	class vectorIsFull:public std::exception{
		public:
			const char *what() const throw(){
				return "vectorIsFull";
			}
	};
	class vectorIsTooSmall:public std::exception{
		public:
			const char *what() const throw(){
				return "vectorIsTooSmall";
			}
	};
	~Span();
};
