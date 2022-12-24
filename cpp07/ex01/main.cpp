# include "iter.h"

template <typename T> void func(T var){
	std::cout << var << std::endl;
}

int main(){
	//int array[] = {1,2,3,4,5,6,7,8,9};
	std::string strArray[] = {"ab", "bc", "cd"};
	::iter(strArray, 3, &func);
}