#pragma once
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
class ClamPizza :
	public Pizza
{
	PizzaIngredientFactory* ingredientFactory;

public:
	ClamPizza(PizzaIngredientFactory* ingredientFactory) {
		this->ingredientFactory = ingredientFactory;
	}

	void prepare() {
		cout << ("Preparing " + name);
		dough = ingredientFactory->createDough();
		sauce = ingredientFactory->createSauce();
		cheese = ingredientFactory->createCheese();
		clam = ingredientFactory->createClam();
	}
};

