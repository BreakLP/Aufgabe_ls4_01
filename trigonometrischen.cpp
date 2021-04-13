//trigonometrischen.cpp
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <math.h> 

double sinus(double Zahl1) {
	return sin(Zahl1);
}
double cosinus(double Zahl1) {
	return cos(Zahl1);
}
double tangens(double Zahl1) {
	return tan(Zahl1);
}
double arcussinus(double Zahl1) {
	return asin(Zahl1);
}
double arccosinus(double Zahl1) {
	return acos(Zahl1);
}
double arctangens(double Zahl1) {
	return atan(Zahl1);
}

double tri(string funk, double Zahl1) {

	double ergebnis = 0;

	if (funk == "sinus") {
		ergebnis = sinus(Zahl1);
	}
	if (funk == "cosinus") {
		ergebnis = cosinus(Zahl1);
	}
	if (funk == "tangens") {
		ergebnis = tangens(Zahl1);
	}
	if (funk == "arsinus") {
		ergebnis = arcussinus(Zahl1);
	}
	if (funk == "arccosinus") {
		ergebnis = arccosinus(Zahl1);
	}
	if (funk == "arctangens") {
		ergebnis = arctangens(Zahl1);
	}
	return ergebnis;
}