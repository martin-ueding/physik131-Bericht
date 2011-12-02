/* Datei main.cpp
   In dieser Datei wird eine Beispielanwendung der Klasse Student implementiert.
 */

// binde die Beschreibung von Student ein
#include "student.h"
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	// Lege ein Studenten  mit dem Standard-Konstruktor an.
	Student studi;
	// Diesen String benötigen wir um den Vornamen zu übergeben
	string temp_vorname;

	cout << "\nHier wird der Student getestet!" << endl;
	// teste die Methoden der Instanz a von Student
	cout << "Default Voname und Nachname  des Studenten: " << studi.getVorname() << " " <<  studi.getNachname() << endl;

	cout << "--------------------------------" << endl;
	cout << "Nun werden neue Paramter des Studenten gesetzt." << endl;
	cout << "--------------------------------" << endl;
	cout << "Setze einen Vornamen: ";
	// Eingabe des neuen vornamens und temporär speichern in temp_vorname
	cin >> temp_vorname;
	// Setzt den Namen das angelegten Studenten (Objekt std)
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

	// Rückgabe 0 an das Betriebssystem soll heißen, erfolgreich beendet
	return 0;
}
