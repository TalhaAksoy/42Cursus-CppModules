//
// Created by Selim talha Aksoy on 12/22/22.
//

#pragma once

# include <iostream>

class Data {
public:
	Data();
	~Data();
	Data(const Data &var);
	Data& operator = (const Data& var);
	int nbr1;
	int nb2;
	char chr1;
};

std::uintptr_t serialize(Data *ptr);
Data* deserialize(std::uintptr_t *raw);

