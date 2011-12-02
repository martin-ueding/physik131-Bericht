#include "student.h"
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	Student studi;
	string temp_vorname;

	cout << "Standardvorname und -nachname des Studenten: " << studi.getVorname() << " " <<  studi.getNachname() << endl;

	cout << "Setze einen Vornamen: ";
	cin >> temp_vorname;
	studi.setVorname(temp_vorname);
	cout << endl << "Neuer Voname des Studenten: " << studi.getVorname() << endl;

	int tag, monat, jahr;
	cout << "Hier bitte die Geburtsdaten im Format <Tag Monat Jahr> eingeben (ab 1970)." << endl;
	cin >> tag >> monat >> jahr;
	cout << "Das Geburtsdatum lautet: " << tag << " " << monat << " " << jahr << endl;
	studi.setGeburtstag(tag, monat, jahr);
	cout <<  "Das Alter des Studenten ist: " << studi.getAlter() << endl;

	return 0;
}
