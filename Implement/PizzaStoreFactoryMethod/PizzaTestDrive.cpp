#include "Pizza.h"
#include "PizzaStore.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"
#include "DependentPizzaStore.h"

int main()
{
	PizzaStore *nyStore = new NYPizzaStore;
	PizzaStore *chicagoStore = new ChicagoPizzaStore;

	Pizza *pizza = nyStore->orderPizza("cheese");
	cout << "Ethan ordered a " + pizza->getname() + "\n";

	pizza = chicagoStore->orderPizza("cheese");
	cout << "Joel ordered a " + pizza->getname() + "\n";

	pizza = nyStore->orderPizza("clam");
	cout << "Ethan ordered a " + pizza->getname() + "\n";

	pizza = chicagoStore->orderPizza("clam");
	cout << "Joel ordered a " + pizza->getname() + "\n";

	pizza = nyStore->orderPizza("pepperoni");
	cout << "Ethan ordered a " + pizza->getname() + "\n";

	pizza = chicagoStore->orderPizza("pepperoni");
	cout << "Joel ordered a " + pizza->getname() + "\n";

	pizza = nyStore->orderPizza("veggie");
	cout << ("Ethan ordered a " + pizza->getname() + "\n");

	pizza = chicagoStore->orderPizza("veggie");
	cout << "Joel ordered a " + pizza->getname() + "\n";
	delete pizza;
	delete nyStore;
	delete chicagoStore;
	return 0;
}