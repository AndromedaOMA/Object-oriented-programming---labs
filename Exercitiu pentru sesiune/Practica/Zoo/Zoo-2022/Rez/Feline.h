#pragma once
#include<vector>
#include<iostream>
#include<string>
#include "Animal.h"
class Feline:public Animal {
public:
	virtual int GetSpeed() = 0;
};