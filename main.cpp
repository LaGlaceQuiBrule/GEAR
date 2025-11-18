#include "Transmission.h"

int main(int argc, char* argv) {

	cout << "//------------------------------------------------------------------------------------//" << endl;
	cout << "//------------------------ INSTANCIATTION OF A STRAIGHTWHEEL -------------------------//" << endl;
	cout << "//------------------------------------------------------------------------------------//" << endl;
	
	int n_z = 18;

	float n_m = Wheel::MODULES[2];

	StraightWheel w = StraightWheel(n_z, n_m);
	cout << w << endl;

	cout << "//------------------------------------------------------------------------------------//" << endl;
	cout << "//---------------------------- INSTANCIATTION OF A SHAFT -----------------------------//" << endl;
	cout << "//------------------------------------------------------------------------------------//" << endl;

	int n_rotation = 1;

	float angle = 8.5;
	float n_angular_speed = 100.0f;
	
	PHelicalWheel ws1 = new HelicalWheel(n_z, n_m, angle);
	PHelicalWheel ws2 = new HelicalWheel(2*n_z, n_m, angle);

	Shaft s = Shaft(ws1, ws2, n_rotation, n_angular_speed);
	cout << s << endl;

	//-------------------------------------------------------------------------------------------------------------------------------//

	/*****************************************

		create a transmission knowing :

			- number of shaft
			- inputs speed
			- output speed
			- the rotation direction of the train

		Wheel type depend on n_angle :
		
			- n_angle <= 0	: transimission with straight wheel
			- n_angle > 0	: transimission with helical wheel

	******************************************/

	cout << "//------------------------------------------------------------------------------------//" << endl;
	cout << "//-------------- INSTANCIATE A TRANSMISSION KNOWING THE NUMBER OF SHAFT --------------//" << endl;
	cout << "//------------------------------------------------------------------------------------//" << endl;

	int n_nb_shaft = 4;

	float n_input_speed = 1550.0f;
	float n_output_speed = 3000.0f;
	float n_angle = -1.0f;

	n_rotation = -(int)pow((-1.0), n_nb_shaft);

	Transmission t1 = Transmission::create_gear_train(n_nb_shaft, n_input_speed, n_output_speed, n_rotation, n_angle);

	cout << t1;

	//-------------------------------------------------------------------------------------------------------------------------------//

	/******************************************

		create a transmission knowing :

		- inputs speed
		- output speed
		- the rotation direction of the train

		and minimze the transmission mass

		Wheel type depend on n_angle :

			- n_angle <= 0	: transimission with straight wheel
			- n_angle > 0	: transimission with helical wheel

	******************************************/

	cout << "//---------------------------------------------------------------------------------------------//" << endl;
	cout << "//-------------- INSTANCIATE A TRANSMISSION WHITHOUT KNOWING THE NUMBER OF SHAFT --------------//" << endl;
	cout << "//---------------------------------------------------------------------------------------------//" << endl;

	int nb_shaft_computed = 0;

	float min_mass_computed = 0.f;

	n_rotation = 1;

	n_input_speed = 2563.25f;
	n_output_speed = 1565.15f;
	n_angle = 8.5;

	Transmission t2 = Transmission::create_gear_train(n_input_speed, n_output_speed, n_rotation, &nb_shaft_computed, &min_mass_computed, n_angle);

	cout << t2;

	cout << "mass of t2 = " << min_mass_computed << "_g" << endl;

	return(0);
}