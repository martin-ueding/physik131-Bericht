#include "student.h"
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	Student studi;
	string temp_vorname;

	cout << "\nHier wird der Student getestet!" << endl;
	cout << "Default Voname und Nachname  des Studenten: " << studi.getVorname() << " " <<  studi.getNachname() << endl;

	cout << "--------------------------------" << endl;
	cout << "Nun werden neue Paramter des Studenten gesetzt." << endl;
	cout << "--------------------------------" << endl;
	cout << "Setze einen Vornamen: ";
	cin >> temp_vorname;
	studi.setVorname(temp_vorname);
	cout << endl << "Neuer Voname des Studenten: " << studi.getVorname() << endl;

	cout << "--------------------------------" << endl;
	int tag, monat, jahr;
	cout << "Hier bitte die Geburtsdaten im Format <Tag Monat Jahr> eingeben (ab 1970)." << endl;
	cin >> tag >> monat >> jahr;
	cout << "\nDas Geburtsdatum lautet: " << tag << " " << monat << " " << jahr << endl;
	studi.setGeburtstag(tag, monat, jahr);
	cout <<  "Das Alter des Studenten ist: " << studi.getAlter() << endl;
	cout << "--------------------------------" << endl;

	cout << endl << "...beende main...." << endl;

	return 0;
}
