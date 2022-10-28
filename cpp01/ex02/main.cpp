#include <iostream>

using	std::string;
using	std::cout;
using	std::endl;
int main()
{
	string	str;
	string* stringPTR = &str;
	string &stringREF = str;

	str = "HI THIS IS BRAIN";
	cout << &stringPTR << endl;
	cout << stringREF << endl;
}