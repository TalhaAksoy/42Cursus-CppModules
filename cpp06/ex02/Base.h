//
// Created by Selim talha Aksoy on 12/23/22.
//

#pragma once

# include <iostream>

class Base {
public:
	Base();
	virtual ~Base();
};

Base *generate(void);
void identify (Base *p);
void identify (Base &p);