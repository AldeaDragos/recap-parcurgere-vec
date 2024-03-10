#pragma once
#include <iostream>
#include <string.h>
using namespace std;


int existaImpare(int v[], int dim) {


	for (int i = 0; i < dim; i++) {

		if (v[i] % 2 != 0) {
			return true;
		}
	}
	return false;
}

int nrPrim(int n) {

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;;
		}
	}
	return true;
}

void elemPrime(int v[], int dim) {

	for (int i = 0; i < dim; i++) {

		if (nrPrim(v[i])) {
			cout << " Nu exista numere prime in sir " << endl;
		}
		else {
			cout << " Nu exista numere prime in sir " << endl;
		}
	}

}