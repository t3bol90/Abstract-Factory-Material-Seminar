#pragma once
#include "Pizza.h"
class ChicagoStyleClamPizza :
	public Pizza
{
public:
	ChicagoStyleClamPizza() {
		name = "Chicago Style Clam Pizza";
		dough = "Extra Thick Crust Dough";
		sauce = "Plum Tomato Sauce";

		toppings.push_back("Shredded Mozzarella Cheese");
		toppings.push_back("Frozen Clams from Chesapeake Bay");
	}

	void cut() override{
		cout << "Cutting the pizza into square slices" << endl;
	}
};

