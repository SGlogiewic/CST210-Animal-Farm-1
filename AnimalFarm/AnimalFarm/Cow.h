//Created by: Stephen Glogiewicz
#pragma once
#include <iostream>
#include "Animal.h"

class Cow : public Animal
{
private:
	void gainWeight();
public:
	Cow();
	Cow(string name, double height, double weight);
	void eat();
};
