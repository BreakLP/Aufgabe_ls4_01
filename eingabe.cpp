//eingabe.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

string ausrechen() {				//auswahlfunktion der Rechenart // R�ckgabe der Rechenart
	string rechenart = "1";
	
	cout << "Rechenart ausw�hlen" << endl;
	cout << "-------------" << endl << endl;
	cout << "Grundrechenarten (gru) oder Trigonometrischen Funktionen (tri)" << endl;
	cin >> rechenart;

	return rechenart;
}

string eingrund() {					//eingabe und R�ckgabe der Grundrechenart 
	string Grundrechenart = "1";


	cout << "Grundrechenarten" << endl;
	cout << "+, -, /, *" << endl;
	cin >> Grundrechenart;
	
	return Grundrechenart;
}

/*double grueingabezahlen(double* Zahlen, string grundrechenart) {
	double Zahl1 = 0;
	double Zahl2 = 0;
	//double Zahlen [1];

	cout << "Eingabe Zahlen (Best�tigen mit Enter)" << endl;
	cin >> Zahl1;
	cout << grundrechenart << endl;
	cin >> Zahl2;
	Zahlen(Zahl1, Zahl2);

	return Zahlen(Zahl1, Zahl2 );
}*/
double eingabezahl1(string grundrechenart) {		//eingabe und R�ckgabe der ersten Zahl
	double Zahl1 = 0;

	cout << "Eingabe Zahlen (Best�tigen mit Enter)" << endl;
	cin >> Zahl1;
	cout << grundrechenart << endl;

	return Zahl1;
}

double eingabezahl2() {								//eingabe und R�ckgabe der zweiten Zahl
	double Zahl2 = 0;

	cin >> Zahl2;

	return Zahl2;
}

double ausgabe(double ergebnis) {					//ausgabefunktion des Ergebnis

	cout << "ergebnis = " << ergebnis << endl;

	return 0;
}

string eintrifunk() {								//eingabe und R�ckgabe der Trigonometrischen Funktionen						
	
	string Trifunk = "1";

	cout << "Trigonometrischen Funktionen" << endl;
	cout << "sinus, cosinus, tangens, arcus sinus, arc cosinus, arc tangens" << endl;
	cin >> Trifunk;

	return Trifunk;
}

double trieinzahl() {								//eingabe und R�ckgabe der Zahl
	double Zahl1;

	cout << "Eingabe Zahl (Best�tigen mit Enter)" << endl;
	cin >> Zahl1;

	return Zahl1;
}
string ende() {										//abfrage zum Programmende
	string eingabe = "1";
	cout << "Beliebige eingabe zum fortfahren" << endl;
	cout << "Zum Beenden exit eingeben" << endl;
	cin >> eingabe;

	return eingabe;
}

