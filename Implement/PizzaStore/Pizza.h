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
	void prepare()
	{
		cout << "Preparing " << name << endl;
	}
	void bake()
	{
		cout << "Baking " << name << endl;
	}
	void cut()
	{
		cout << "Cutting " << name << endl;
	}
	void box()
	{
		cout << "Boxing " << name << endl;
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

