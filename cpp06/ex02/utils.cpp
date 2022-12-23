//
// Created by Selim talha Aksoy on 12/23/22.
//

# include "Base.h"
# include "A.h"
# include "B.h"
# include "C.h"

Base *generate(void){
	std::srand(time(NULL));
	int rand = std::rand() % 3;
	switch (rand) {
		case 0:
			return new A();
			break;
		case 1:
			return new B();
			break;
		case 2:
			return new C();
			break;
	}
	return (NULL);
}

void identify (Base *p){
	if ((A*)dynamic_cast<A*>(p) != nullptr){
		std::cout << "Variable Type Is -> [A]" << std::endl;
	}
	if ((B*)dynamic_cast<B*>(p) != nullptr){
		std::cout << "Variable Type Is -> [B]" << std::endl;
	}
	if ((C*)dynamic_cast<C*>(p) != nullptr){
		std::cout << "Variable Type Is -> [C]" << std::endl;
	}
}

void identify (Base &p){
	try{
		Base ptr = dynamic_cast<A&>(p);
		(void)ptr;
		std::cout << "Variable Type Is -> [A]" << std::endl;
	}catch (std::bad_cast){}
	try {
		Base ptr = dynamic_cast<B&>(p);
		(void)ptr;
		std::cout << "Variable Type Is -> [B]" << std::endl;
	}catch (std::bad_cast){}
	try{
		Base ptr = dynamic_cast<C&>(p);
		(void)ptr;
		std::cout << "Variable Type Is -> [C]" << std::endl;
	}catch (std::bad_cast){}
}