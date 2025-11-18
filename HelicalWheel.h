#pragma once
#ifndef HELICAL_WHEEL_H
#define HELICAL_WHEEL_H

#include "Wheel.h"

class HelicalWheel : public Wheel {

private:

	float angle;

public:

	//----- CONSTRUCTOR -----//
	HelicalWheel();
	HelicalWheel(int n_z, float n_m, float n_angle);
	HelicalWheel(float n_m, int n_d, float n_angle);

	//----- DESTRUCTOR -----//
	~HelicalWheel();

	//----- GET -----//
	float get_angle();

	//----- SET -----//
	void set_angle(float n_angle);

	//----- METHODS -----//
	friend ostream& operator<<(ostream& os, const HelicalWheel& w);

	float compute_wheel_volume() override;
};

#endif
