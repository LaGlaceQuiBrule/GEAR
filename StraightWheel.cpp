#define _USE_MATH_DEFINES

#include "StraightWheel.h"

//----- CONSTRUCTOR -----//
StraightWheel::StraightWheel() : Wheel(){}

StraightWheel::StraightWheel(int n_z, float n_m) : Wheel(n_z, n_m){}

StraightWheel::StraightWheel(float n_m, int n_d) : Wheel(n_m, n_d) {}

//----- DESTRUCTOR -----//
StraightWheel::~StraightWheel() {}

//----- METHODS -----//
float StraightWheel::compute_wheel_volume() {
	
	float volume = ((float)M_PI * ((float)(d * d)) / 4) * e;

	return(volume);
}
