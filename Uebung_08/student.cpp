/* Datei student.cpp
   In dieser Datei werden die Methoden der Klasse implementiert/umgesetzt.
*/


// Binde die Deklaration/Beschreibung der Klasse ein, die sogenannte Header-Datei
#include "student.h"

using namespace std;

/*************************************************************************
   Diese Methode der Klasse Student setzt den Vornamen des Studenten auf den  
   übergebenen Vornamen 
   Parameter:
		vorname - die der zu setzende Vorname
*/
void Student::setVorname(string vorname)
{	// setze den Vornamen des Studenten (dessen Methode 
	// setVorname() gerade aufgerufen wird) auf den übergebenen Vornamen
	this->vorname = vorname;
}
/*ebenso der Nachname*/
void Student::setNachname(string nachname){
	this->nachname = nachname;
}
/*************************************************************************
   Diese Methode der Klasse Student ermittelt den Vornamen des Studenten
   Return:
		der Vorname des Studenten
*/

string Student::getVorname(){	

	return vorname;
}
/*ebenso der Nachname*/
string Student::getNachname(){	

	return nachname;
}
/*************************************************************************
 Hier wird das Alter nach Aufruf von getAlter() berechnet und zurueckgegebe 
 Dazu wird die Time Library benutzt, eingebunden mit <time.h>.
 Mehr hierzu z.B. unter www.cplusplus.com
*/
int Student::getAlter(){
  //Schaltjahre nicht berücksichtigt!

  struct tm * timeinfo;
  time_t rawtime;
  // Hier werden die vergangenen Sekunden seit dem 1.1.1970 berechnet
  time ( &rawtime );
  timeinfo = localtime ( &rawtime );

  struct tm * timeset;
  timeset = localtime ( &rawtime );
  // Hier wird das Geburtsdatum gesetzt
  timeset->tm_year = geb_jahr - 1900;
  timeset->tm_mon = geb_monat - 1;
  timeset->tm_mday = geb_tag;
  time_t settime = mktime(timeset);
  
  int diff = (int)difftime(rawtime,settime)/60/60/24/365;
	
  return diff;
}

/*Hier wird das Alter des Studenten gesetzt*/
void Student::setGeburtstag(int tag, int monat, int jahr){
  geb_tag = tag;
  geb_monat = monat;
  geb_jahr = jahr;
}

/*************************************************************************
   Konstruktor zum Erzeugen eines Studenten ;-)
   Es wird dabei der Vorname des Studenten 
   standardmäßig auf "Vorname"  gesetzt usw.
*/
Student::Student()
{	
  vorname="Vorname";
  nachname="Nachname";

  geb_tag = 1;
  geb_monat = 1;
  geb_jahr = 1950;
}

/*************************************************************************
   Der Destruktor eines Studenten wird automatisch aufgerufen, wenn das 
   Programm beendet wird oder wenn explizit das Objekt/die Instanz mit 
   delete verworfen wird oder wenn anderweitig der Gültigkeitsraum einer
   Variablen vom Typ Student endet. 
*/
Student::~Student()
{	// zu Testzwecken: mache hier eine Ausgabe, damit man den Aufruf sehen kann
	cout << "Destructor!!!" << endl;

} 
