#include "recapitulare.h"


void sol1() {


	int date[200] = { 2,4,5,9,7,8 };
	if (existaImpare(date, 6)==1) {
		cout << "Exista numere impare in sir " << endl;
	}
	else {
		cout << "Nu exista numere impare in sir " << endl;
	}
}

void sol2() {

	int date[200] = { 21,8,6,10,8,13 };
	if (elemPrime(date,6) == 1) {
		cout << " DA " << endl;
	}
	else {
		cout << " NU " << endl;
	}
}

void sol3() {


	int date[200] = { 2,4,5,9,7,8 };
	if (verifPare(date, 6) == 1) {
		cout << "NU " << endl;
	}
	else {
		cout << " DA " << endl;
	}
}