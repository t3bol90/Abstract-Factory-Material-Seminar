#pragma once
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
class VeggiePizza :
	public Pizza
{
	PizzaIngredientFactory* ingredientFactory;
public:
	VeggiePizza(PizzaIngredientFactory* ingredientFactory) {
		this->ingredientFactory = ingredientFactory;
	}

	void prepare() {
		cout << ("Preparing " + name);
		dough = ingredientFactory->createDough();
		sauce = ingredientFactory->createSauce();
		cheese = ingredientFactory->createCheese();
		veggies = ingredientFactory->createVeggies();
	}
};