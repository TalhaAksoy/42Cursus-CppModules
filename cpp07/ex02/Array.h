//
// Created by Selim talha Aksoy on 12/24/22.
//

#ifndef ARRAY_H
#define ARRAY_H

# include <iostream>

template <typename T>
class Array{
private:
	T* arr;
	unsigned int len;
public:
	Array(){
		this->arr = new T[1];
		this->arr[0] = NULL;
		this->len = 1;
	}
	Array(unsigned int len){
		this->arr = new T[len];
		this->len = len;
	}
	Array(const Array& var){
		*this = var;
	}
	~Array(){
		delete[] arr;
	}
	Array &operator=(const Array& var){
		if (this == &var){
			return *this;
		}
		this->len = var.len;
		this->arr = new T[this->len];
		for (unsigned  int i = 0; i < this->len ; i++){
			this->arr[i] = var.arr[i];
		}
		return *this;
	}
	class outOfRange:public std::exception{
		public:
			const char* what() const throw(){
				return "Out Of Range";
			}
	};
	T& operator[](unsigned int a){
		if (a >= len){
			throw outOfRange();
		}
		else
			return this->arr[a];
	};
	unsigned int size(void){
		return len;
	}
};

#endif //ARRAY_H
