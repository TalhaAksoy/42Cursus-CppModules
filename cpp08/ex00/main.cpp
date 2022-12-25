

#include "easyfind.h"
#include <vector>

int main() {
	std::vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	try{
		std::vector<int>::iterator it = easyfind(v, 3);
		if(it != v.end())
			std::cout << *it << std::endl;
	}
	catch (std::exception &a){
		std::cout << a.what() << std::endl;
	}
	return 0;
}