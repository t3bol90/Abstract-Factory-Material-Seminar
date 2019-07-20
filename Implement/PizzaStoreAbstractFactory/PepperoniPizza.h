#pragma once
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
class PepperoniPizza :
	public Pizza
{
	PizzaIngredientFactory* ingredientFactory;

public:
	PepperoniPizza(PizzaIngredientFactory* ingredientFactory) {
		this->ingredientFactory = ingredientFactory;
	}

	void prepare() {
		cout << ("Preparing " + name);
		dough = ingredientFactory->createDough();
		sauce = ingredientFactory->createSauce();
		cheese = ingredientFactory->createCheese();
		veggies = ingredientFactory->createVeggies();
		pepperoni = ingredientFactory->createPepperoni();
	}
};


