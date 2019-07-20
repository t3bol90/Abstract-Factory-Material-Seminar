#pragma once
#include <string>
using namespace std;
class Dough
{
public:
	virtual string toString() = 0;
};

class ThickCrustDough : public Dough {
public:
	string toString() {
		return "ThickCrust style extra thick crust dough";
	}
};
class ThinCrustDough : public Dough {
public:
	string toString() {
		return "Thin Crust Dough";
	}
};
