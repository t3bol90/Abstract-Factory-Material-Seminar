#pragma once
#include "Pizza.h"
#include "NYStyleCheesePizza.h"
#include "NYStyleClamPizza.h"
#include "NYStylePepperoniPizza.h"
#include "NYStyleVeggiePizza.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleClamPizza.h"
#include "ChicagoStylePepperoniPizza.h"
#include "ChicagoStyleVeggiePizza.h"
class DependentPizzaStore
{
public:
	Pizza* createPizza(string style, string type) {
		Pizza *pizza = nullptr;
		if (style == ("NY")) {
			if (type == ("cheese")) {
				pizza = new NYStyleCheesePizza();
			}
			else if (type == ("veggie")) {
				pizza = new NYStyleVeggiePizza();
			}
			else if (type == ("clam")) {
				pizza = new NYStyleClamPizza();
			}
			else if (type == ("pepperoni")) {
				pizza = new NYStylePepperoniPizza();
			}
		}
		else if (style == ("Chicago")) {
			if (type == ("cheese")) {
				pizza = new ChicagoStyleCheesePizza();
			}
			else if (type == ("veggie")) {
				pizza = new ChicagoStyleVeggiePizza();
			}
			else if (type == ("clam")) {
				pizza = new ChicagoStyleClamPizza();
			}
			else if (type == ("pepperoni")) {
				pizza = new ChicagoStylePepperoniPizza();
			}
		}
		else {
			cout << "Error: invalid type of pizza" << endl;
			return nullptr;
		}
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
		return pizza;
	}
};

