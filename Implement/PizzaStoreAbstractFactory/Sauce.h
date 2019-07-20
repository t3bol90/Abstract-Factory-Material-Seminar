#pragma once
#include <string>
using namespace std;
class Sauce
{
public:
	virtual string toString() = 0;
};

class PlumTomatoSauce : public Sauce {
public:
	string toString() {
		return "Tomato sauce with plum tomatoes";
	}
};

class MarinaraSauce : public Sauce {
public:
	string toString() {
		return "Marinara Sauce";
	}
};
