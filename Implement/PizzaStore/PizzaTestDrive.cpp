
#include "SimplePizzaFactory.h"
#include "PizzaStore.h"
#include <iostream>
using namespace std;

int main()
{
	SimplePizzaFactory* factory = new SimplePizzaFactory;
	PizzaStore* store = new PizzaStore(factory);
	Pizza *pizza = store->orderPizza("cheese");
	cout << "We ordered a " + pizza->getname() << endl;
	cout << pizza->toString();
	pizza = store->orderPizza("veggie");
	cout << "We ordered a " + pizza->getname() << endl;
	cout << pizza->toString();
	delete store;
	delete factory;
	delete pizza;
	return 0;
}