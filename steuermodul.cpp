//
//	Inhalt:
//		Einordnung:			FS-LF5-LS4-Beispiel-1
//		Projekt: 			Taschenrechner_ls4_1
//		Thema:				Modularer Taschenrechner
//	Autor:
//		Name:				Joel Nobis
//		Organisaion:		BK-GuT
//
//	Datum:
//		Erstellt:			23.03.2021
//		Letzte Änderung:	08.04.2021
//

//steunermodul.cpp

#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include "eingabe.h";
#include "grundrechen.h";
#include "trigonometrischen.h";

using namespace std;

int main() {												
	double Grundrechnung();
	double Trigonometrischen();

	locale::global(locale("German_germany"));				// Zeichensatz deutsch

	string exit = "1";										//Bedingung des Programm endes

	while (exit != "exit") {								//Steuerungsfunkition
		
		string rechenart = "1";
		rechenart = ausrechen();							//eingabe der rechenart 
		
		if ((rechenart == "gru")|| (rechenart == "Grundrechenarten")) {						//auswahl und weitergabe falls eingabe = Grundrechenarten			
			Grundrechnung();
		}

		if ((rechenart == "tri") || (rechenart == "Trigonometrischen Funktionen")) {		//auswahl und weitergabe falls eingabe = Trigonometrischen Funktionen	
			Trigonometrischen();
		}
		exit = ende();										//abfrage Programmende
		cout << " " << endl << endl << endl << endl;
	}
}

double Grundrechnung() {									//unterfunktion für die Steuerung der Grundrechnarten

	string grundrechenart = "1";
	double Zahl1 = 0;
	double Zahl2 = 0;
	double ergebnis = 0;
	
	grundrechenart = eingrund();								//eingabe der Zahlen und Rechenart
	Zahl1 = eingabezahl1(grundrechenart);
	Zahl2 = eingabezahl2();

	ergebnis = grund(grundrechenart, Zahl1, Zahl2);				//übergabe an rechner 

	ausgabe(ergebnis);											//ausgabe des ergebnis
	
	
	return 0;
}

double Trigonometrischen() {									//unterfunktion für die Steuerung der Grundrechnarten Trigonometrischen Funktionen

	string trifunk = "1";
	double zahl1 = 0;
	double ergebnis = 0;

	trifunk = eintrifunk();										//eingabe der Zahlen und Funktion
	zahl1 = trieinzahl();

	ergebnis = tri(trifunk, zahl1);								//übergabe an rechner

	ausgabe(ergebnis);											//ausgabe des ergebnis


	return 0;
}