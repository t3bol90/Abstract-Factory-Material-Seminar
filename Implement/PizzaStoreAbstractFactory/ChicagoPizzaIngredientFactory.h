#pragma once
#include "PizzaIngredientFactory.h"
class ChicagoPizzaIngredientFactory :
	public PizzaIngredientFactory
{
public:
	Dough* createDough() {
		return new ThickCrustDough();
	}

	Sauce* createSauce() {
		return new PlumTomatoSauce();
	}

	Cheese* createCheese() {
		return new MozzarellaCheese();
	}

	vector<Veggies*> createVeggies() {
		vector<Veggies*> veggies = { new BlackOlives(),
							  new Spinach(),
							  new Eggplant() };
		return veggies;
	}

	Pepperoni* createPepperoni() {
		return new SlicedPepperoni();
	}

	Clams* createClam() {
		return new FrozenClams();
	}
};

