#pragma once
#include <string>
using namespace std;

class Cheese
{
public:
	virtual string toString() = 0;
};

class MozzarellaCheese : public Cheese {

public: string toString() {
	return "Shredded Mozzarella";
}
};

class ParmesanCheese : public Cheese {

public: string toString() {
	return "Shredded Parmesan";
}
};
class ReggianoCheese : public Cheese {

public: string toString() {
	return "Reggiano Cheese";
}
};
