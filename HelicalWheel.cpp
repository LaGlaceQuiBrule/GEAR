#define _USE_MATH_DEFINES

#include "HelicalWheel.h"

//----- CONSTRUCTOR -----//
HelicalWheel::HelicalWheel () : Wheel() {
	angle = 0.f;
}

HelicalWheel::HelicalWheel(int n_z, float n_m, float n_angle) : Wheel(n_z, n_m){
	angle = n_angle;
}

HelicalWheel::HelicalWheel(float n_m, int n_d, float n_angle) : Wheel(n_m, n_d) {
	angle = n_angle;
}

//----- DESTRUCTOR -----//
HelicalWheel::~HelicalWheel () {}

//----- GET -----//
float HelicalWheel::get_angle() {
	return(angle);
}

//----- SET -----//
void HelicalWheel::set_angle(float n_angle) {
	angle = n_angle;
}

//----- METHODS -----//
ostream& operator<<(ostream& os, const HelicalWheel& w) {

	os << "z = " << w.z << endl;
	os << "d = " << w.d << "_mm" << endl;
	os << "m = " << w.m << "_mm" << endl;
	os << "angle = " << w.angle << "_deg" << endl;

	return os;
}

float HelicalWheel::compute_wheel_volume() {

	float volume = ((float)M_PI * ((float)(d * d)) / 4) * e;

	return(volume);
}