#include "student.h"

using namespace std;

void Student::setVorname(string vorname) {
	this->vorname = vorname;
}

void Student::setNachname(string nachname) {
	this->nachname = nachname;
}

string Student::getVorname() {
	return vorname;
}

string Student::getNachname() {
	return nachname;
}

int Student::getAlter() {
	struct tm *timeinfo;
	time_t rawtime;

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	struct tm *timeset;
	timeset = localtime(&rawtime);

	timeset->tm_year = geb_jahr - 1900;
	timeset->tm_mon = geb_monat - 1;
	timeset->tm_mday = geb_tag;
	time_t settime = mktime(timeset);

	int diff = (int)difftime(rawtime, settime) / 60 / 60 / 24 / 365;

	return diff;
}

void Student::setGeburtstag(int tag, int monat, int jahr) {
	geb_tag = tag;
	geb_monat = monat;
	geb_jahr = jahr;
}

Student::Student() {
	vorname = "Vorname";
	nachname = "Nachname";

	geb_tag = 1;
	geb_monat = 1;
	geb_jahr = 1950;
}

Student::~Student() {
}
