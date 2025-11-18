#pragma once
#ifndef STRAIGHT_WHEEL_H
#define STRAIGHT_WHEEL_H

#include "Wheel.h"

class StraightWheel : public Wheel{

private:

public:

	//----- CONSTRUCTOR -----//
	StraightWheel();
	StraightWheel(int n_z, float n_m);
	StraightWheel(float n_m, int n_d);

	//----- DESTRUCTOR -----//
	~StraightWheel();

	//----- METHODS -----//
	float compute_wheel_volume() override;
};

#endif