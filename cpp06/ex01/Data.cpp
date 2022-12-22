//
// Created by Selim talha Aksoy on 12/22/22.
//

#include "Data.h"

Data::Data():nbr1(10),nb2(200),chr1('a') {
	std::cout << "Constrcutor Called" << std::endl;
}

Data::~Data() {
	std::cout << "Deconst Called" << std::endl;
}

Data::Data(const Data &var) {
	*this = var;
	std::cout << "Copy Const Called" << std::endl;
}

Data &Data::operator=(const Data &var) {
	this->nbr1 = var.nbr1;
	this->nb2 = var.nb2;
	this->chr1 = var.chr1;
	return (*this);
}

std::uintptr_t serialize(Data *ptr)
{
	std::uintptr_t tmp = reinterpret_cast<std::uintptr_t>(ptr);
	return tmp;
}

Data* deserialize(std::uintptr_t *raw){
	Data *tmp = reinterpret_cast<Data *>(raw);
	return tmp;
}