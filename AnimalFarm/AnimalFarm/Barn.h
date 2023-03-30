//Created by: Stephen Glogiewicz
#pragma once
#include <iostream>
#include <vector>
#include "Animal.h"
#include "Chicken.h"
#include "Cow.h"
using namespace std;
class Barn
{
private:
	vector<Chicken> coop;
	vector<Cow> pen;
public:
	Barn();
	void feedChicken();
	void feedCow();
};

