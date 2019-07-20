#pragma once
#include <string>
using namespace std;
class Veggies
{
public:
	virtual string toString() = 0;
};

class Spinach :public Veggies {

	string toString() override {
		return "Spinach";
	}
};

class RedPepper :public Veggies {

	string toString() override {
		return "Red Pepper";
	}
};

class Onion :public Veggies {

	string toString() override {
		return "Onion";
	}
};

class Mushroom :public Veggies {

	string toString() override {
		return "Mushroom";
	}
};

class Garlic :public Veggies {

	string toString() override {
		return "Garlic";
	}
};

class Eggplant :public Veggies {

	string toString() override {
		return "Eggplant";
	}
};


class BlackOlives :public Veggies {

	string toString() override {
		return "Black Olives";
	}
};


