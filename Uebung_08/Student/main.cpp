#include "student.h"
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	Student student;
	string temp_vorname;

	cout << "Standardvorname und -nachname des Studenten: " << student.getVorname() << " " <<  student.getNachname() << endl;

	cout << "Setze einen Vornamen: ";
	cin >> temp_vorname;
	student.setVorname(temp_vorname);
	cout << endl << "Neuer Voname des Studenten: " << student.getVorname() << endl;

	int tag, monat, jahr;
	cout << "Hier bitte die Geburtsdaten im Format <Tag Monat Jahr> eingeben (ab 1970)." << endl;
	cin >> tag >> monat >> jahr;
	cout << "Das Geburtsdatum lautet: " << tag << " " << monat << " " << jahr << endl;
	student.setGeburtstag(tag, monat, jahr);
	cout <<  "Das Alter des Studenten ist: " << student.getAlter() << endl;

	return 0;
}
