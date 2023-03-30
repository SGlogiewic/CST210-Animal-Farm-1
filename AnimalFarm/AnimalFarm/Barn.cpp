//Created by: Stephen Glogiewicz
#include "Barn.h"
#include <iostream>
using namespace std;
//barn constructor that creates elements for coop and pen vectors
Barn::Barn()
{
	coop.push_back(Chicken("Eggy", 1, 5));
	coop.push_back(Chicken("Iggy", 0.9, 4));
	coop.push_back(Chicken("Jiggy", 0.3, 2));
	pen.push_back(Cow("Jim", 5.5, 1000));
	pen.push_back(Cow("Joe", 5.2, 1010));
	pen.push_back(Cow("Billy", 5.7, 1502));
	pen.push_back(Cow("Bob", 5.31, 1391));
}

//feedChicken function
void Barn::feedChicken()
{
	//prints out that the chickens are being fed
	cout << "Feeding the chickens: " << endl;
	//runs a for loop to feed each chicken in the coop
	for (int i = 0; i < coop.size(); i++)
	{
		coop[i].eat();
	}
	cout << "" << endl;
}

//feedCow function
void Barn::feedCow()
{
	//prints out that the cows are being fed
	cout << "Feeding the cows: " << endl;
	//runs a for loop to feed each cow in the pen
	for (int i = 0; i < pen.size(); i++)
	{
		pen[i].eat();
	}
	cout << "" << endl;
}
