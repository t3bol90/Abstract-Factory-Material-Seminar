#pragma once
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
class CheesePizza :
	public Pizza
{
	PizzaIngredientFactory *ingredientFactory;

public:
	CheesePizza(PizzaIngredientFactory *ingredientFactory) {
		this->ingredientFactory = ingredientFactory;
	}

	void prepare() {
		cout << ("Preparing " + name); 
		dough = ingredientFactory->createDough();
		sauce = ingredientFactory->createSauce();
		cheese = ingredientFactory->createCheese();
	}
};
