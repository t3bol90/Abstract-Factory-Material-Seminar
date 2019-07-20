#pragma once
#include "Pizza.h"
class PepperoniPizza: public Pizza
{
public:
	PepperoniPizza()
	{
		name = "Pepperoni Pizza";
		dough = "Crust";
		sauce = "Marinara Sauce";
		toppings.push_back("Sliced Pepperoni");
		toppings.push_back("Sliced Onion");
		toppings.push_back("Grated parmesan cheese");
	}
};

