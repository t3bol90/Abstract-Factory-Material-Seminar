#include <iostream>
#include <string>
using namespace std;
#include"Pizza.h"
#include "PizzaStore.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"
int main()
{
		PizzaStore *nyStore = new NYPizzaStore;
		PizzaStore *chicagoStore = new ChicagoPizzaStore;

		Pizza *pizza = nyStore->orderPizza("cheese");
		cout << ("Ethan ordered a " + pizza->toString() + "\n");

		pizza = chicagoStore->orderPizza("cheese");
		cout << ("Joel ordered a " + pizza->toString() + "\n");

		pizza = nyStore->orderPizza("clam");
		cout << ("Ethan ordered a " + pizza->toString() + "\n");

		pizza = chicagoStore->orderPizza("clam");
		cout << ("Joel ordered a " + pizza->toString() + "\n");

		pizza = nyStore->orderPizza("pepperoni");
		cout << ("Ethan ordered a " + pizza->toString() + "\n");

		pizza = chicagoStore->orderPizza("pepperoni");
		cout << ("Joel ordered a " + pizza->toString() + "\n");

		pizza = nyStore->orderPizza("veggie");
		cout << ("Ethan ordered a " + pizza->toString() + "\n");

		pizza = chicagoStore->orderPizza("veggie");
		cout << ("Joel ordered a " + pizza->toString() + "\n");
		delete pizza;
		delete nyStore;
		delete chicagoStore;
		return 0;
}
