#pragma once

#include"Visitor.h"

class TaxVisitor : public Visitor {

public:
	//Soldiers
	virtual std::string visit(Soldier* sol);
	//Points
	virtual std::string visit(Point2D* p);





};
