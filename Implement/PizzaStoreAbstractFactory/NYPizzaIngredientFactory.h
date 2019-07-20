#pragma once
#include "PizzaIngredientFactory.h"
class NYPizzaIngredientFactory :
	public PizzaIngredientFactory
{
public:
	Dough* createDough() {
		return new ThinCrustDough();
	}

	Sauce* createSauce() {
		return new MarinaraSauce();
	}

	Cheese* createCheese() {
		return new ReggianoCheese();
	}

	 vector<Veggies*> createVeggies() {
		vector<Veggies*> veggies = { new Garlic(), new Onion(), new Mushroom(), new RedPepper() };
		return veggies;
	}

	Pepperoni* createPepperoni() {
		return new SlicedPepperoni();
	}

	Clams* createClam() {
		return new FreshClams();
	}
};

