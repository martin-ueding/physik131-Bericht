/* Datei student.h
  In dieser Datei befindet sich die Beschreibung/Deklaration der Klasse.
*/

/* Damit eine mehrfache Deklaration der Klasse durch mehrfaches Einbinden 
   dieser Headerdatei verhindert wird, wird über die Präprozessor-Anweisung
   "#define AUTO_H" ein Wert gesetzt, den man mittels "ifdef" bzw.
   "ifndef" abprüfen kann. Dieser gibt Auskunft, ob diese Headerdatei bereits 
   eingebunden wurde.
*/
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>	// für cout
#include <string>	// für string Operationen
#include <time.h>       // für datums und Zeitinforationen
using namespace std;

/*
   Hier folgt die Beschreibung der Klasse Student
*/
class Student
{
// privater Teil der Klasse (darauf hat nur die Klasse Zugriff)
	private:
		/* Eine Eigenschaft/ein Attribut einer Realisierung/Instanz von Student,
		   welche den Vornamen beinhaltet.
		 */
                string vorname;
		/* Eine weitere Eigenschaft, die den Nachnamen darstellt.
		 */
		string nachname;

		/* Die Eigenschaft Geburtsdatum */
		int geb_tag;
		int geb_monat;
		int geb_jahr;

	// öffentlicher Teil der Klasse (alles darunter angegebene kann von 
	// jedem verwendet werden)
	public:
		/* Ein Konstruktor zum Generieren eines Student-Objektes */
		Student();
		/* Ein Destruktor zum Zerstören eines Student-Objektes */
		~Student();			

		/* Eine Methode, mit der man den Vornamen des Studenten setzen kann */
		void setVorname(string vorname);
		/* Eine Methode, mit der man den Vornamen des Studenten auslesen kann */
		string getVorname();
		/* analog Voname,hier der Nachname*/
		void setNachname(string nachname);
		string getNachname();

		/* Eine Methode um das Alter des Studenten festzustellen*/
		int getAlter();
		void setGeburtstag(int geb_tag, int geb_monat, int geb_jahr); 
		
}; // Dieses Semikolon darf nicht fehlen!!!

#endif
