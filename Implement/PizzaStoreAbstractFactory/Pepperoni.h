#pragma once
#include <string>
using namespace std;

class Pepperoni
{
public:
	virtual string toString() = 0;
};

class SlicedPepperoni : public Pepperoni {

public:
	string toString() {
		return "Sliced Pepperoni";
	}
};

