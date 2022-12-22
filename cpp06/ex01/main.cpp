
# include <iostream>

struct Data{
	int a;
	int b;
	char c;
};

std::uintptr_t serialize(Data *ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(std::uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}

int main(){
	Data data;
	Data *dataPtr = &data;
	data.a = 100;
	data.b = 200;
	data.c = 'A';

	std::cout << "Data.a: " << data.a << " Data.b: " << data.b << std::endl;
	std::uintptr_t  ptr = serialize(dataPtr);
	std::cout << "Serialized ptr: " << reinterpret_cast<std::uintptr_t *>(ptr) << " Data ptr: " << &data << std::endl;
	std::cout << "Data.a: " << *reinterpret_cast<int*>(ptr) << " Data.B: " << *(reinterpret_cast<int*>(ptr) + 1) << std::endl;
	dataPtr = deserialize(ptr);

	std::cout << "Data.a: " << dataPtr->a << " Data.b: " << dataPtr->b << std::endl;
}