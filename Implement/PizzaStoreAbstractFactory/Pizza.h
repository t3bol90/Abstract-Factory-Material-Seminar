#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include "Dough.h"
#include "Sauce.h"
#include "Veggies.h"
#include "Pepperoni.h"
#include "Cheese.h"
#include "Clams.h"
using namespace std;
class Pizza
{
protected:
	string name;

	Dough* dough;
	Sauce* sauce;
	vector<Veggies*> veggies;
	Cheese* cheese;
	Pepperoni* pepperoni;
	Clams* clam;
public:
	virtual void prepare() = 0;

	void bake() {
		cout << ("Bake for 25 minutes at 350");
	}

	void cut() {
		cout << ("Cutting the pizza into diagonal slices");
	}

	void box() {
		cout << ("Place pizza in official PizzaStore box");
	}

	void setName(string name) {
		this->name = name;
	}

	string getName() {
		return name;
	}

	string toString() {
		stringstream result;
		result << ("---- " + name + " ----\n");
		if (dough != nullptr) {
			result << dough->toString();
			result << ("\n");
		}
		if (sauce != nullptr) {
			result << sauce->toString();
			result << ("\n");
		}
		if (cheese != nullptr) {
			result << cheese->toString();
			result << ("\n");
		}
		if (!veggies.empty()) {
			for (auto& i : veggies) {
				result << i->toString() << " , ";
			}
			result << ("\n");
		}
		if (clam != nullptr) {
			result << clam->toString();
			result << ("\n");
		}
		if (pepperoni != nullptr) {
			result << pepperoni->toString();
			result << ("\n");
		}
		return result.str();
	}
};

