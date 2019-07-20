#pragma once
#include "Pizza.h"
class PizzaStore
{
protected:
	virtual Pizza* createPizza(string item) = 0;

public:
	Pizza* orderPizza(string type) {
			Pizza *pizza = createPizza(type);
			cout << ("--- Making a " + pizza->getName() + " ---");
			pizza->prepare();
			pizza->bake();
			pizza->cut();
			pizza->box();
			return pizza;
		}
};

