#include "Data.h"

Data* deserialize(std::uintptr_t *raw);
std::uintptr_t serialize(Data *ptr);
int main(){
	Data dt;
	Data* dtPtr = &dt;

	std::cout << deserialize( serialize( dtPtr ) )->a <<  std::endl;
	std::cout << deserialize( serialize( dtPtr ) )->ch << std::endl;
	std::cout << deserialize( serialize( dtPtr ) )->b <<  std::endl;

	return 0;
}