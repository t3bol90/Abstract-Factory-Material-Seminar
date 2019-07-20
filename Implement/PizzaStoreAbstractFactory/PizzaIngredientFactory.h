#pragma once
#include <string>
#include <vector>
#include "Dough.h"
#include "Sauce.h"
#include "Veggies.h"
#include "Pepperoni.h"
#include "Cheese.h"
#include "Clams.h"
using namespace std;
class PizzaIngredientFactory
{
public:
	virtual Dough* createDough() = 0;
	virtual Sauce* createSauce() = 0;
	virtual Cheese* createCheese() = 0;
	virtual vector<Veggies*> createVeggies() = 0;
	virtual Pepperoni* createPepperoni() = 0;
	virtual Clams* createClam() = 0;

};

