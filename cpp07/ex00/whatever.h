#pragma once

#include <iostream>

template <typename T> void swap(T &a, T &b){
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T> T min(T a, T b){
	if (a == b){
		return b;
	}
	return (a > b ? b : a);
}

template <typename T> T max(T a, T b){
	if (a == b){
		return b;
	}
	return ( a > b ? a : b);
}