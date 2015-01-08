#pragma once
#include "Morpion.h"

class IA
{
protected:
	int shape_;
	int prof_;
	int cptEval_;
	Morpion *morpion_;

public:
	IA();
	~IA();

	int getShape(){ return shape_;}
	Morpion* getMorpion(){ return morpion_; }
	virtual void calculIA(Morpion *morpion, int prof) = 0;

	int getProf(){ return prof_; }
	void decProf(){ prof_--; }
	void incProf(){ prof_++; }

};

