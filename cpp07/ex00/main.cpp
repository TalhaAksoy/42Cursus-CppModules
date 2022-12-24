#include "whatever.h"

int main(){
	int a = 5;
	int b = 6;
	::swap(a, b);
	std::cout << "a => " << a << "| b => " << b << '\n';

	int c = 2;
	int d = 4;
	std::cout << "min(c, d) => " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) => " << ::max(c, d) << std::endl;

	std::string e = "chaine1";
	std::string f = "chaine2";
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
}