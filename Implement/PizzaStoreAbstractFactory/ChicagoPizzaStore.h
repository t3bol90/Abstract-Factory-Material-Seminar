#pragma once
#include "PizzaStore.h"
#include "PizzaIngredientFactory.h"
#include "CheesePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
#include "VeggiesPizza.h"
#include "ChicagoPizzaIngredientFactory.h"
class ChicagoPizzaStore :
	public PizzaStore
{
public:
	Pizza* createPizza(string item) {
		Pizza *pizza = nullptr;
		PizzaIngredientFactory *ingredientFactory = new ChicagoPizzaIngredientFactory();

		if (item == ("cheese")) {

			pizza = new CheesePizza(ingredientFactory);
			pizza->setName("Chicago Style Cheese Pizza");

		}
		else if (item == ("veggie")) {

			pizza = new VeggiePizza(ingredientFactory);
			pizza->setName("Chicago Style Veggie Pizza");

		}
		else if (item == ("clam")) {

			pizza = new ClamPizza(ingredientFactory);
			pizza->setName("Chicago Style Clam Pizza");

		}
		else if (item == ("pepperoni")) {

			pizza = new PepperoniPizza(ingredientFactory);
			pizza->setName("Chicago Style Pepperoni Pizza");

		}
		return pizza;
	}
};

