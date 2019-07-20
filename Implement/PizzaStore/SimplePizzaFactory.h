#pragma once

#include "Pizza.h"
#include "CheesePizza.h"
#include "PepperoniPizza.h"
#include "ClamPizza.h"
#include "VeggiePizza.h"
class SimplePizzaFactory
{
public:
	Pizza* createPizza(string type)
	{
		Pizza *pizza = nullptr;
		if (type == "cheese") {
			pizza = new CheesePizza();
		}
		else if (type == "pepperoni") {
			pizza = new PepperoniPizza();
		}
		else if (type == "clam") {
			pizza = new ClamPizza();
		}
		else if (type == "veggie") {
			pizza = new VeggiePizza();
		}
		return pizza;
	}

};

