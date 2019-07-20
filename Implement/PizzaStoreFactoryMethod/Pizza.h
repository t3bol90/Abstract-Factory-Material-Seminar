#pragma once
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;
class Pizza
{
protected:
	string name;
	string dough;
	string sauce;
	vector<string> toppings;
public:

	string getname()
	{
		return name;
	}
	virtual void prepare()
	{
		cout << "Preparing " << name << endl;
		cout << "Tossing dough ..." << endl;
		cout << "Adding sauce ... " << endl;
		cout << "Adding toppings: ";
		for (auto& i : this->toppings)
			cout << "  " << i << endl;
	}
	virtual void bake()
	{
		cout << "Bake for 25 minutes at 350 " << name << endl;
	}
	virtual void cut()
	{
		cout << "Cut the pizza into diagonal slices " << name << endl;
	}
	virtual void box()
	{
		cout << "Place pizza in official PizzaStore box " << name << endl;
	}
	string toString()
	{
		stringstream is;
		is << "---- " + name + " ----\n";
		is << dough + "\n";
		is << sauce + "\n";
		is << "List of toppings\n";
		for (auto& i : this->toppings)
			is << i + "\n";
		return is.str();
	}
};

