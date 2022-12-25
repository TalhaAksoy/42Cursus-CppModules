# include "MutantStack.h"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5); // add var top on stack
	mstack.push(17);
	std::cout << " mstack.top() => " << mstack.top() << std::endl; // top element on stack
	mstack.pop(); // remove top element on stack
	std::cout << "mstack.size() => " << mstack.size() << std::endl; // return stack size with int
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "[" << *it << "]" << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}