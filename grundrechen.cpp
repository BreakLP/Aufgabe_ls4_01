//Grundrechen.cpp
using namespace std;
#include <iostream>
#include <cstdlib>

double plus1(double a, double b) {
	return a + b;
}
double minus1(double a, double b) {
	return a - b;
}
double mal1(double a, double b) {
	return a * b;
}
double geteilt1(double a, double b) {
	return a / b;
}


double grund(string rechenart, double Zahl1, double Zahl2) {
	double gruergebnis;

	if (rechenart == "+") {
		gruergebnis = plus1(Zahl1, Zahl2);
	}
	if (rechenart == "-") {
		gruergebnis = minus1(Zahl1, Zahl2);
	}
	if (rechenart == "*") {
		gruergebnis = mal1(Zahl1, Zahl2);
	}
	if (rechenart == "/") {
		gruergebnis = geteilt1(Zahl1, Zahl2);
	}

	return gruergebnis;
}
