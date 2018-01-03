#pragma once
#include <string>
class Element {

public:

	virtual std::string accept(class Visitor &v) = 0;
};