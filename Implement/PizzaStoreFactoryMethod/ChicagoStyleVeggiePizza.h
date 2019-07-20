#pragma once
#include "Pizza.h"
class ChicagoStyleVeggiePizza :
	public Pizza
{
public:
	ChicagoStyleVeggiePizza() {
		name = "Chicago Deep Dish Veggie Pizza";
		dough = "Extra Thick Crust Dough";
		sauce = "Plum Tomato Sauce";

		toppings.push_back("Shredded Mozzarella Cheese");
		toppings.push_back("Black Olives");
		toppings.push_back("Spinach");
		toppings.push_back("Eggplant");
	}

	void cut() {
		cout << ("Cutting the pizza into square slices") << endl;
	}
};

