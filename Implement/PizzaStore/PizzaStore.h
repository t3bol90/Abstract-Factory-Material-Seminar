#pragma once
#include "SimplePizzaFactory.h"
#include "Pizza.h"
class PizzaStore
{
	SimplePizzaFactory *factory;
public:
	PizzaStore(SimplePizzaFactory *&fact)
	{
		this->factory = fact;
	}
	Pizza* orderPizza(string type)
	{
		Pizza* pizza;
		pizza = factory->createPizza(type);
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
		return pizza;
	}
};

