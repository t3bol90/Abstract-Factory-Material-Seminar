#pragma once
#include "PizzaStore.h"
#include "PizzaIngredientFactory.h"
#include "CheesePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
#include "VeggiesPizza.h"
#include "NYPizzaIngredientFactory.h"
class NYPizzaStore :
	public PizzaStore
{
public:
	Pizza* createPizza(string item) {
		Pizza* pizza = nullptr;
		PizzaIngredientFactory* ingredientFactory = new NYPizzaIngredientFactory();

		if (item == ("cheese")) {

			pizza = new CheesePizza(ingredientFactory);
			pizza->setName("New York Style Cheese Pizza");

		}
		else if (item == ("veggie")) {

			pizza = new VeggiePizza(ingredientFactory);
			pizza->setName("New York Style Veggie Pizza");

		}
		else if (item == ("clam")) {

			pizza = new ClamPizza(ingredientFactory);
			pizza->setName("New York Style Clam Pizza");

		}
		else if (item == ("pepperoni")) {

			pizza = new PepperoniPizza(ingredientFactory);
			pizza->setName("New York Style Pepperoni Pizza");

		}
		return pizza;
	}
};
