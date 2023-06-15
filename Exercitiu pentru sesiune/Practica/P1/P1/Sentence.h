#pragma once
#include<vector>
#include "Processor.h"

class Sentence
{
private:
	std::string name;
	//
	std::vector<Processor*> Processor;
public:
	Sentence();
	void RunAll();
	void ListAll();
	void Run(std::string str);
	void operator+= (Processor * pr);
};

