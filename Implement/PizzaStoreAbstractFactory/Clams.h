#pragma once
#include <string>
using namespace std;
class Clams
{
public:
	virtual string toString() = 0;
};

class FreshClams :public Clams {

public: string toString() {
	return "Fresh Clams from Long Island Sound";
}
};
class FrozenClams :public Clams {

public: string toString() {
	return "Frozen Clams from Chesapeake Bay";
}
};


