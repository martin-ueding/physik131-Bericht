#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class Student {
private:
	string vorname;
	string nachname;

	int geb_tag;
	int geb_monat;
	int geb_jahr;

public:
	Student();
	~Student();

	void setVorname(string vorname);
	string getVorname();
	void setNachname(string nachname);
	string getNachname();

	int getAlter();
	void setGeburtstag(int geb_tag, int geb_monat, int geb_jahr);

};

#endif
